/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100123
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100123 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100123
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
    for (unsigned short i_0 = 1; i_0 < 12; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 15; i_2 += 2) 
                {
                    for (int i_3 = 0; i_3 < 15; i_3 += 2) 
                    {
                        {
                            arr_11 [i_0 + 2] [i_0 - 1] [i_0] [i_0 + 3] = ((/* implicit */long long int) min((((18037080748107359353ULL) - (18037080748107359353ULL))), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) 828346807U)), (-6742133430915010510LL))))));
                            var_11 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) var_3)) ? (18037080748107359352ULL) : (((/* implicit */unsigned long long int) var_1))))));
                            /* LoopSeq 2 */
                            for (int i_4 = 0; i_4 < 15; i_4 += 3) 
                            {
                                var_12 = ((/* implicit */signed char) arr_1 [i_0 + 3] [i_4]);
                                var_13 |= ((/* implicit */short) (~(arr_12 [10LL] [10LL] [i_2] [i_3] [10LL])));
                                arr_14 [i_0] [i_1] [i_3] [i_3] [i_4] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_6 [i_0 + 1] [i_0 + 3] [i_2])) ? (arr_6 [i_1] [i_0 + 2] [i_1]) : (arr_6 [i_0 + 1] [i_0 + 2] [i_0 + 2]))) & (((/* implicit */long long int) max((min((var_2), (((/* implicit */int) arr_9 [i_0] [i_0 + 2] [i_1] [i_2] [i_3] [i_4])))), (((((/* implicit */_Bool) -6196619375372318191LL)) ? (((/* implicit */int) (unsigned short)43673)) : (-940987099))))))));
                                var_14 = ((/* implicit */long long int) max((var_14), (((/* implicit */long long int) (~(((((/* implicit */_Bool) ((18037080748107359342ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))) ? (3767223942U) : (((/* implicit */unsigned int) (~(-88304890)))))))))));
                            }
                            /* vectorizable */
                            for (int i_5 = 1; i_5 < 12; i_5 += 1) 
                            {
                                var_15 -= ((/* implicit */long long int) arr_7 [(unsigned short)7] [i_1] [i_2]);
                                var_16 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)84)) ? (((((/* implicit */_Bool) 13014965842220471045ULL)) ? (arr_6 [i_0] [i_1] [i_3]) : (((/* implicit */long long int) ((/* implicit */int) var_7))))) : ((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (arr_6 [i_1] [i_1] [(unsigned short)0])))));
                                var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_9 [i_0] [i_0 - 1] [i_3] [i_0] [i_5 + 2] [i_5])) ? (0) : (((/* implicit */int) arr_9 [i_0] [i_0 + 2] [(short)9] [i_5] [i_5 + 2] [i_1]))));
                            }
                            var_18 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_1 [i_0 - 1] [(short)12])) ? (((/* implicit */int) ((short) 15495975871943444450ULL))) : ((-(2147483647))))) <= (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((short) (short)-26369)))) <= (arr_1 [i_0 + 1] [i_0 + 1]))))));
                        }
                    } 
                } 
                var_19 = ((/* implicit */int) ((short) (~(((/* implicit */int) var_5)))));
            }
        } 
    } 
    var_20 = ((/* implicit */short) var_1);
    var_21 = ((/* implicit */_Bool) var_9);
    var_22 = ((/* implicit */long long int) min((((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)31))))) || (((_Bool) var_3))))), (((((/* implicit */_Bool) min((var_5), ((short)26368)))) ? (((/* implicit */int) var_9)) : (min((((/* implicit */int) (unsigned short)44151)), (var_2)))))));
}
