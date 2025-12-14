/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149667
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149667 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149667
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
    for (long long int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) (+(((/* implicit */int) (short)-10291)))))));
                arr_7 [i_0] [i_1] = ((/* implicit */int) max((((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */unsigned int) (-(((/* implicit */int) arr_5 [i_0] [i_1] [i_0]))))) : (var_10))), (((/* implicit */unsigned int) (unsigned char)32))));
                var_19 = ((/* implicit */unsigned char) ((((((int) (unsigned char)43)) < (((/* implicit */int) var_9)))) ? (arr_0 [i_0]) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (arr_6 [i_0]) : (((/* implicit */unsigned long long int) -1554613008))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_1]))))) : (((/* implicit */int) ((arr_4 [i_1] [i_1] [i_1]) != (((/* implicit */int) arr_5 [i_0] [i_0] [(unsigned short)5]))))))))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned char i_2 = 0; i_2 < 18; i_2 += 1) 
    {
        var_20 &= ((/* implicit */_Bool) (signed char)115);
        /* LoopNest 3 */
        for (unsigned long long int i_3 = 0; i_3 < 18; i_3 += 4) 
        {
            for (unsigned char i_4 = 0; i_4 < 18; i_4 += 4) 
            {
                for (unsigned short i_5 = 0; i_5 < 18; i_5 += 1) 
                {
                    {
                        var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min(((short)-10281), (((/* implicit */short) var_17))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_2]))))) : (1148459869)))) ? (((((/* implicit */_Bool) 1152921504606846975LL)) ? (((/* implicit */int) (unsigned short)15360)) : (((/* implicit */int) (short)-15014)))) : (((/* implicit */int) ((((/* implicit */_Bool) ((arr_12 [(unsigned char)7] [i_4] [i_5]) ? (((/* implicit */int) arr_12 [i_2] [i_3] [i_3])) : (((/* implicit */int) (short)-10260))))) && (((/* implicit */_Bool) arr_8 [i_2])))))));
                        /* LoopSeq 1 */
                        for (int i_6 = 0; i_6 < 18; i_6 += 4) 
                        {
                            var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_12 [i_2] [i_2] [i_4]) ? (((/* implicit */int) (unsigned char)32)) : (var_1)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_15 [i_3] [i_3] [i_3] [i_3] [i_3]))))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_13 [i_2] [i_3] [i_4])) && (((/* implicit */_Bool) var_3)))))))) ? (((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)10294))) : (max((4294967295U), (((/* implicit */unsigned int) (short)(-32767 - 1))))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_3)))));
                            var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) max((((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [12ULL] [i_3] [12ULL])) ? (arr_11 [i_2]) : (((/* implicit */unsigned long long int) var_7)))))))), ((-(1152921504606846975LL))))))));
                            arr_19 [i_5] [i_3] [i_4] [i_5] [i_5] [i_6] = ((/* implicit */long long int) max((arr_10 [i_2]), (max((((/* implicit */unsigned int) arr_8 [i_2])), (((((/* implicit */_Bool) arr_8 [i_2])) ? (((/* implicit */unsigned int) var_1)) : (arr_10 [i_3])))))));
                            var_24 = ((/* implicit */signed char) arr_8 [i_3]);
                            var_25 -= min(((-((-(9949005556544891317ULL))))), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) 234885286)) < ((-(5LL)))))));
                        }
                    }
                } 
            } 
        } 
    }
}
