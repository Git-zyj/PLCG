/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166382
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166382 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166382
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    var_16 = ((/* implicit */long long int) var_4);
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            {
                var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) arr_2 [i_0]))));
                arr_8 [12LL] [i_1] [i_1] = ((/* implicit */int) ((((/* implicit */int) max(((signed char)-120), (((/* implicit */signed char) (!(((/* implicit */_Bool) var_14)))))))) <= (((/* implicit */int) (!(((/* implicit */_Bool) var_12)))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_2 = 0; i_2 < 17; i_2 += 2) 
    {
        for (int i_3 = 0; i_3 < 17; i_3 += 1) 
        {
            {
                var_18 = ((/* implicit */signed char) ((((((arr_9 [i_2] [i_3]) | (arr_9 [i_2] [i_3]))) + (9223372036854775807LL))) >> (((/* implicit */int) ((((/* implicit */_Bool) (signed char)-23)) || (((/* implicit */_Bool) -1)))))));
                /* LoopNest 3 */
                for (unsigned int i_4 = 0; i_4 < 17; i_4 += 1) 
                {
                    for (unsigned int i_5 = 0; i_5 < 17; i_5 += 3) 
                    {
                        for (unsigned short i_6 = 0; i_6 < 17; i_6 += 3) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (((_Bool)0) ? (max((((/* implicit */int) (signed char)22)), (arr_11 [i_2] [i_5] [i_3]))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_12)))))))) ? (arr_12 [i_2]) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-124))))))));
                                arr_20 [i_5] [i_6] [i_3] = ((/* implicit */unsigned char) (((((!(((/* implicit */_Bool) var_14)))) ? (arr_12 [i_2]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)104))))) != (max((((/* implicit */long long int) arr_16 [i_2] [i_3] [(unsigned short)9] [i_5] [i_6])), (var_10)))));
                                var_20 = ((/* implicit */signed char) max((((/* implicit */int) (unsigned char)177)), (((((/* implicit */_Bool) (unsigned short)36871)) ? (((/* implicit */int) (unsigned short)40094)) : (((/* implicit */int) min(((unsigned short)65531), (((/* implicit */unsigned short) (short)18330)))))))));
                                var_21 = ((/* implicit */unsigned short) 1061233285U);
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (long long int i_7 = 2; i_7 < 13; i_7 += 4) 
                {
                    for (unsigned char i_8 = 0; i_8 < 17; i_8 += 3) 
                    {
                        {
                            var_22 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((arr_19 [i_7 + 1] [i_7 + 2] [i_7] [i_7] [i_7] [i_7]), (((/* implicit */unsigned int) (unsigned char)55))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((arr_19 [i_7 - 1] [i_7 - 1] [i_7] [i_7 + 4] [2] [i_2]) > (arr_19 [i_7 + 1] [i_2] [(unsigned char)15] [i_7] [i_7 + 1] [i_2]))))) : (max((arr_19 [i_7 + 1] [5LL] [i_7] [i_3] [5LL] [5LL]), (((/* implicit */unsigned int) arr_11 [i_2] [i_7] [i_2]))))));
                            arr_25 [i_2] [i_2] [i_3] [i_7] [i_3] = ((/* implicit */int) ((((((/* implicit */_Bool) max((var_14), (var_14)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) (short)(-32767 - 1)))) : (arr_24 [i_2] [i_3] [(unsigned short)15] [i_8])))))) || (((/* implicit */_Bool) max((((/* implicit */unsigned char) (!(((/* implicit */_Bool) 1196041708U))))), ((unsigned char)104))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
