/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146949
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146949 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146949
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
    var_12 = ((/* implicit */unsigned short) min(((((-(-1913700111410252823LL))) / (((/* implicit */long long int) (-(((/* implicit */int) var_5))))))), (((var_10) % (((/* implicit */long long int) ((/* implicit */int) var_4)))))));
    var_13 = ((/* implicit */unsigned long long int) (((-(10262328428090133366ULL))) == (((/* implicit */unsigned long long int) (-(var_9))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        var_14 -= min(((-(((/* implicit */int) arr_1 [14ULL])))), (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) arr_1 [18LL])) < (((/* implicit */int) arr_2 [i_0]))))) > ((+(((/* implicit */int) (unsigned char)225))))))));
        /* LoopSeq 3 */
        for (unsigned int i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            var_15 = ((/* implicit */unsigned short) max((((arr_1 [i_0]) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0])))), (((/* implicit */int) arr_1 [i_0]))));
            var_16 = ((/* implicit */unsigned int) (((-(8184415645619418232ULL))) * (((/* implicit */unsigned long long int) (-((-(((/* implicit */int) arr_0 [i_0])))))))));
        }
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
        {
            arr_7 [i_0] = ((/* implicit */long long int) ((((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) arr_5 [i_0] [i_0] [i_2]))))) != ((+((-9223372036854775807LL - 1LL))))));
            var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) min((min((((/* implicit */int) arr_6 [i_2])), (((((/* implicit */int) arr_0 [(unsigned short)20])) | (((/* implicit */int) arr_1 [(unsigned short)8])))))), (((/* implicit */int) max((arr_6 [i_0]), (arr_5 [i_0] [i_2] [i_0])))))))));
        }
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
        {
            arr_11 [i_0] [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)8))) / (9223372036854775795LL)))) | (min((((/* implicit */unsigned long long int) arr_2 [i_0])), (8184415645619418234ULL)))));
            arr_12 [i_3] [i_0] [i_3] = ((/* implicit */unsigned long long int) (-(1620339532)));
        }
        var_18 = ((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */int) arr_1 [i_0])) < (((/* implicit */int) arr_0 [i_0])))))));
    }
    var_19 = ((/* implicit */signed char) (((-(((10262328428090133366ULL) >> (((/* implicit */int) var_8)))))) == (((/* implicit */unsigned long long int) min((var_10), (((/* implicit */long long int) max((var_9), (var_9)))))))));
    /* LoopNest 2 */
    for (signed char i_4 = 1; i_4 < 14; i_4 += 3) 
    {
        for (unsigned char i_5 = 0; i_5 < 16; i_5 += 4) 
        {
            {
                var_20 = ((/* implicit */unsigned long long int) 201099623U);
                /* LoopSeq 1 */
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) ((((/* implicit */_Bool) max(((+(((/* implicit */int) arr_2 [i_5])))), (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_5]))) >= (arr_18 [i_4] [i_4] [i_4] [i_4]))))))) || (((/* implicit */_Bool) min((-1201243853), (((/* implicit */int) arr_19 [i_4] [i_4] [i_4 + 2]))))))))));
                    /* LoopNest 2 */
                    for (unsigned short i_7 = 0; i_7 < 16; i_7 += 2) 
                    {
                        for (unsigned char i_8 = 1; i_8 < 13; i_8 += 2) 
                        {
                            {
                                var_22 = ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) 12208220722959218016ULL)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_16 [i_4] [i_4] [i_4])) * (((/* implicit */int) arr_23 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4]))))) : ((-(8184415645619418250ULL)))))) && (((((/* implicit */_Bool) ((((/* implicit */int) arr_6 [i_4])) ^ (((/* implicit */int) arr_6 [i_4]))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [i_4] [i_4] [i_4] [i_4] [i_4])) ? (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_5] [i_4]))) : (arr_18 [i_4] [i_4] [i_4] [i_4])))))));
                                arr_26 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4] = (~(max((((/* implicit */unsigned long long int) arr_20 [i_8 - 1] [i_8 - 1] [i_8 - 1] [i_8 - 1] [i_8 - 1])), (((arr_23 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4]) ? (8184415645619418249ULL) : (((/* implicit */unsigned long long int) arr_15 [i_8])))))));
                                arr_27 [i_4] [i_4] [i_4] [i_4] [i_4] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)9100))) % (10262328428090133384ULL)));
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */unsigned short) arr_13 [i_4]);
                    var_24 -= ((/* implicit */unsigned char) (+(((((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)127))))) - (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)9))) + (8637890657330643269LL)))))));
                }
            }
        } 
    } 
}
