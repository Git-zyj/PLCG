/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166306
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166306 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166306
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            {
                arr_6 [i_0] [(unsigned short)11] |= ((/* implicit */short) var_3);
                arr_7 [i_0] = ((/* implicit */unsigned short) (short)2032);
                /* LoopSeq 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    arr_10 [i_0] [i_1] [i_2] = min((((/* implicit */int) var_4)), (((arr_1 [i_2]) << (((((arr_0 [i_0]) + (6383319264707208263LL))) - (20LL))))));
                    var_12 = ((/* implicit */short) max((var_12), (((/* implicit */short) arr_8 [i_0] [i_0] [0LL]))));
                    var_13 += ((/* implicit */short) ((13LL) << (((((/* implicit */int) (short)0)) & ((+(((/* implicit */int) (short)-2033))))))));
                    var_14 = ((/* implicit */short) max((var_14), (((/* implicit */short) min((((/* implicit */long long int) (_Bool)1)), (((((arr_0 [i_0]) + (9223372036854775807LL))) << (((/* implicit */int) (_Bool)0)))))))));
                }
                for (int i_3 = 1; i_3 < 19; i_3 += 4) 
                {
                    arr_13 [i_3] = ((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */int) (short)-2033)) >= (((/* implicit */int) (unsigned short)0)))))));
                    arr_14 [i_0] [i_1] [(unsigned short)1] [i_1] = (-(((/* implicit */int) (short)5762)));
                    var_15 = max((((/* implicit */unsigned short) min((((/* implicit */short) (!(((/* implicit */_Bool) (short)-32764))))), ((short)2040)))), (max((min(((unsigned short)32640), (((/* implicit */unsigned short) (short)28330)))), (((/* implicit */unsigned short) var_4)))));
                    arr_15 [i_0] [i_1] [i_3] |= ((/* implicit */unsigned short) (unsigned char)6);
                }
                var_16 = ((/* implicit */short) -1544529013);
            }
        } 
    } 
    var_17 |= ((/* implicit */_Bool) ((min((((/* implicit */long long int) var_5)), ((+(13LL))))) - (((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */_Bool) var_10)) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) var_6))))) != (((/* implicit */long long int) ((var_0) & (var_0))))))))));
    var_18 = ((/* implicit */int) var_11);
}
