/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167968
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167968 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167968
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
    var_18 = ((/* implicit */signed char) (short)-28050);
    var_19 = ((/* implicit */short) max(((+(max((var_11), (((/* implicit */long long int) var_17)))))), (((((/* implicit */_Bool) (short)-28039)) ? (((/* implicit */long long int) ((/* implicit */int) max(((unsigned short)10279), (((/* implicit */unsigned short) (short)-13559)))))) : (((long long int) var_9))))));
    /* LoopNest 2 */
    for (long long int i_0 = 2; i_0 < 24; i_0 += 1) 
    {
        for (unsigned char i_1 = 1; i_1 < 22; i_1 += 3) 
        {
            {
                /* LoopSeq 2 */
                for (short i_2 = 1; i_2 < 22; i_2 += 2) 
                {
                    arr_8 [i_0] [i_0] = ((/* implicit */short) -39497024797334396LL);
                    var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) max(((-(((((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0] [i_1] [i_2]))) / (-39497024797334396LL))))), (arr_1 [(short)14]))))));
                    arr_9 [i_0] [i_0] [i_0] = ((/* implicit */short) max((((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) (short)28048)), (arr_6 [i_0] [i_0] [i_0])))) ? (max((arr_0 [i_1] [i_1]), (((/* implicit */int) (unsigned short)55255)))) : (((((/* implicit */int) arr_5 [i_0])) ^ (((/* implicit */int) arr_3 [i_1]))))))), (-4750890657257521567LL)));
                }
                for (unsigned long long int i_3 = 3; i_3 < 21; i_3 += 1) 
                {
                    var_21 += ((/* implicit */unsigned long long int) min((2147483647), (-1545950258)));
                    var_22 ^= ((/* implicit */unsigned short) (-(((/* implicit */int) (short)-13331))));
                    arr_13 [i_0] [i_0] [i_3] [i_0] = ((/* implicit */short) ((((/* implicit */int) max(((short)-13352), (arr_12 [i_3 + 1])))) < (((((_Bool) arr_0 [i_3] [i_3])) ? (arr_0 [i_0 - 2] [i_1 + 2]) : (((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) arr_6 [i_0] [i_1] [i_1]))))))));
                }
                /* LoopNest 3 */
                for (short i_4 = 3; i_4 < 21; i_4 += 1) 
                {
                    for (unsigned int i_5 = 3; i_5 < 24; i_5 += 3) 
                    {
                        for (long long int i_6 = 2; i_6 < 24; i_6 += 3) 
                        {
                            {
                                var_23 -= ((/* implicit */_Bool) (-((-(max((((/* implicit */long long int) (short)19208)), (-4750890657257521561LL)))))));
                                var_24 = ((/* implicit */int) min((var_24), ((-(((/* implicit */int) arr_2 [i_1] [i_1] [i_1]))))));
                                var_25 -= ((/* implicit */signed char) ((((/* implicit */int) (signed char)28)) / (max((((/* implicit */int) (short)-28050)), ((-(((/* implicit */int) (signed char)-86))))))));
                                var_26 = ((/* implicit */unsigned long long int) (~(((arr_1 [i_0]) ^ (arr_1 [i_0])))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_27 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) var_2)))) >> (((/* implicit */int) ((((/* implicit */int) var_4)) < (((/* implicit */int) var_14)))))))) ? ((+(((((/* implicit */int) var_2)) & (((/* implicit */int) (short)13327)))))) : (((/* implicit */int) (((-(-8874465579880932365LL))) <= (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) var_14)))))))))));
}
