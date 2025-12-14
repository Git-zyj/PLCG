/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187259
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187259 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187259
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
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 25; i_2 += 3) 
                {
                    for (unsigned char i_3 = 0; i_3 < 25; i_3 += 4) 
                    {
                        {
                            var_14 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-15))))) ? (((/* implicit */int) ((_Bool) arr_0 [i_0 + 1] [i_1]))) : (((/* implicit */int) ((arr_0 [i_0 + 1] [i_1]) != (arr_0 [i_0 + 1] [i_0 + 1]))))));
                            var_15 = ((/* implicit */_Bool) min((((((/* implicit */int) var_2)) & ((+(((/* implicit */int) var_3)))))), ((-(((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) arr_6 [i_0] [11] [i_0] [i_0]))))))));
                            var_16 = ((/* implicit */unsigned char) ((((var_13) + (2147483647))) >> (((var_1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_8 [i_0 + 1] [i_0 + 1]))))));
                            arr_10 [i_3] [i_3] [(unsigned short)20] [i_3] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!((!(((/* implicit */_Bool) arr_0 [i_0] [i_2])))))))) | (((max((13696892419281913266ULL), (((/* implicit */unsigned long long int) var_9)))) >> (((/* implicit */int) ((arr_4 [(unsigned char)18] [i_1] [i_1]) <= (((/* implicit */long long int) ((/* implicit */int) var_6))))))))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned int i_4 = 0; i_4 < 25; i_4 += 1) 
                {
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        for (long long int i_6 = 0; i_6 < 25; i_6 += 3) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned char) var_11);
                                var_18 = ((/* implicit */unsigned short) arr_0 [i_0 + 1] [i_0 + 1]);
                            }
                        } 
                    } 
                } 
                arr_20 [i_0] [i_0] [i_0 + 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(var_10)))) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (min((var_5), (((/* implicit */long long int) (short)-1))))));
                var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) max((((((/* implicit */long long int) 1762683622)) | ((~(var_10))))), (((/* implicit */long long int) ((((/* implicit */_Bool) 10022273932805766184ULL)) ? ((~(1941921783))) : (((/* implicit */int) var_3))))))))));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned short) var_0);
    /* LoopNest 2 */
    for (short i_7 = 0; i_7 < 12; i_7 += 3) 
    {
        for (_Bool i_8 = 0; i_8 < 0; i_8 += 1) 
        {
            {
                arr_25 [i_7] [i_7] [(unsigned char)9] = ((/* implicit */unsigned int) (unsigned short)4);
                var_21 = ((/* implicit */unsigned char) max((((/* implicit */int) ((((((/* implicit */int) (short)-21355)) | (((/* implicit */int) var_12)))) < (((/* implicit */int) ((signed char) (short)681)))))), (((((((/* implicit */int) arr_5 [i_7] [(unsigned char)11] [i_7] [i_8])) & (((/* implicit */int) var_6)))) | (((((/* implicit */int) var_0)) | (((/* implicit */int) var_2))))))));
            }
        } 
    } 
}
