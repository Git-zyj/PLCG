/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177014
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177014 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177014
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
    var_16 = ((/* implicit */unsigned long long int) (unsigned short)28664);
    var_17 = var_5;
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned long long int i_2 = 4; i_2 < 19; i_2 += 4) /* same iter space */
                {
                    arr_7 [i_1] [i_1] [i_0] = ((/* implicit */unsigned short) (~(((/* implicit */int) (unsigned short)0))));
                    var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((-4087287373450246586LL), (((/* implicit */long long int) (unsigned short)0))))) ? ((+(((/* implicit */int) (unsigned char)217)))) : (((/* implicit */int) min(((unsigned short)28664), (((/* implicit */unsigned short) var_2)))))));
                    arr_8 [i_0] [i_0] [i_2] [6ULL] &= ((/* implicit */int) (unsigned short)0);
                }
                for (unsigned long long int i_3 = 4; i_3 < 19; i_3 += 4) /* same iter space */
                {
                    arr_13 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) min((-4087287373450246586LL), (-3362355428408195416LL)));
                    var_19 += ((/* implicit */short) var_13);
                    /* LoopNest 2 */
                    for (long long int i_4 = 1; i_4 < 20; i_4 += 4) 
                    {
                        for (unsigned int i_5 = 0; i_5 < 22; i_5 += 3) 
                        {
                            {
                                arr_22 [i_0] [i_1] [i_3] [i_1] [i_5] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) (short)-1699)), (max((((/* implicit */unsigned short) (short)1713)), (var_3)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)1698))) : (1ULL)));
                                var_20 = ((/* implicit */unsigned char) var_3);
                                arr_23 [i_5] [i_4] [i_1] [i_1] [i_0] = ((/* implicit */unsigned char) var_5);
                                arr_24 [i_0] [i_1] [i_1] [(unsigned short)1] [(_Bool)1] [i_0] = ((/* implicit */unsigned int) (unsigned short)19013);
                            }
                        } 
                    } 
                    arr_25 [i_0] [i_1] [i_3 - 3] = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) min((max((((/* implicit */long long int) arr_1 [i_0])), (10LL))), (((((/* implicit */_Bool) (short)1713)) ? (arr_9 [i_3]) : (2328261846611331561LL)))))), (min((((((/* implicit */_Bool) -1043048967)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)1683))) : (9519255351463325470ULL))), (((/* implicit */unsigned long long int) (unsigned char)219))))));
                    arr_26 [i_1] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) 18264748632288227877ULL)) ? (((/* implicit */int) var_3)) : (((((/* implicit */_Bool) 181995441421323739ULL)) ? (((/* implicit */int) (short)1698)) : (((/* implicit */int) min((var_12), (((/* implicit */short) (_Bool)1)))))))));
                }
                arr_27 [i_1] [i_1] = ((/* implicit */short) 2147483647);
                var_21 += ((((/* implicit */_Bool) arr_2 [(signed char)6])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (+(arr_4 [i_0] [i_1] [i_0])))) ? (((/* implicit */int) min((((/* implicit */unsigned char) (signed char)-115)), ((unsigned char)71)))) : (((/* implicit */int) max(((unsigned short)65535), (((/* implicit */unsigned short) (unsigned char)219)))))))) : (((((/* implicit */_Bool) max((10LL), (((/* implicit */long long int) arr_17 [(short)18]))))) ? ((+(var_14))) : (((/* implicit */long long int) (-(1043048966)))))));
            }
        } 
    } 
}
