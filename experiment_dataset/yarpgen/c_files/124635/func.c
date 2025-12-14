/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124635
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124635 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124635
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
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            {
                arr_6 [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)8275)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))));
                var_12 = ((/* implicit */unsigned char) min(((short)30), (((/* implicit */short) (_Bool)1))));
                var_13 = ((/* implicit */unsigned short) arr_0 [i_0]);
                var_14 = ((/* implicit */signed char) (+(1139618485)));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_2 = 2; i_2 < 14; i_2 += 4) 
    {
        for (unsigned char i_3 = 0; i_3 < 15; i_3 += 1) 
        {
            {
                arr_14 [i_2] [i_2] [i_2] |= ((/* implicit */unsigned short) ((short) (!(((/* implicit */_Bool) min((var_6), (((/* implicit */short) arr_7 [i_3] [(signed char)3]))))))));
                var_15 &= ((/* implicit */signed char) arr_9 [i_2] [i_3]);
                /* LoopNest 2 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    for (unsigned long long int i_5 = 1; i_5 < 13; i_5 += 2) 
                    {
                        {
                            var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) ((((/* implicit */_Bool) min((min((var_3), (((/* implicit */short) arr_9 [i_2] [i_2])))), ((short)-19812)))) ? (((/* implicit */int) ((short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) + (arr_17 [i_4] [i_4] [i_2]))))) : (((/* implicit */int) ((unsigned char) max((arr_8 [(unsigned short)3] [(unsigned short)3]), (arr_12 [i_2] [i_3] [i_4]))))))))));
                            var_17 = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) (unsigned short)57064)) ? (((/* implicit */int) (_Bool)0)) : ((~(((/* implicit */int) (signed char)-110))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_18 ^= ((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) (unsigned short)38058)) : (((/* implicit */int) (_Bool)1))));
    var_19 |= ((/* implicit */unsigned char) min((((((/* implicit */_Bool) var_6)) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (short)-12033)))) : (((/* implicit */int) var_2)))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (var_7)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_11))))) : (((/* implicit */int) min((var_9), (var_0))))))));
    var_20 = ((/* implicit */unsigned char) var_0);
}
