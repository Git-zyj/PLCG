/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135882
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135882 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135882
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
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                arr_6 [i_1] [(_Bool)1] = 5144951747468138573LL;
                arr_7 [i_1] = ((/* implicit */long long int) (_Bool)1);
                arr_8 [i_0] [i_1] [(_Bool)1] = ((/* implicit */_Bool) max((((/* implicit */long long int) max((arr_5 [i_0] [(_Bool)1]), ((_Bool)1)))), ((-(-4411047287468100934LL)))));
                var_17 -= var_3;
            }
        } 
    } 
    /* LoopNest 3 */
    for (long long int i_2 = 0; i_2 < 24; i_2 += 3) 
    {
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_5 = 4; i_5 < 23; i_5 += 3) 
                    {
                        for (long long int i_6 = 0; i_6 < 24; i_6 += 4) 
                        {
                            {
                                arr_24 [i_2] [i_3] [i_4 - 1] [i_4 - 1] [(_Bool)1] [i_2] [i_5] = ((/* implicit */long long int) (+(((/* implicit */int) arr_18 [i_6]))));
                                var_18 = ((/* implicit */_Bool) (-(((/* implicit */int) ((_Bool) arr_11 [i_4 - 1])))));
                                arr_25 [i_2] [8LL] [i_5] [8LL] [i_6] = ((((/* implicit */_Bool) ((arr_10 [i_3]) & (((/* implicit */long long int) ((/* implicit */int) max(((_Bool)1), (arr_13 [(_Bool)1] [(_Bool)1] [i_6])))))))) ? (max((max((8080019903014972938LL), (((/* implicit */long long int) (_Bool)0)))), (9223372036854775807LL))) : ((-(arr_10 [i_4]))));
                                var_19 ^= ((/* implicit */_Bool) (((+(arr_21 [(_Bool)1] [i_6] [i_6] [i_5 - 1] [i_5 - 2] [i_5 + 1] [i_5]))) ^ (max(((-(8891132627616322226LL))), ((-(-4411047287468100934LL)))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            {
                                arr_31 [i_2] [i_3] [i_7] [(_Bool)1] [i_8] = ((/* implicit */_Bool) (+((+(((/* implicit */int) ((((/* implicit */_Bool) 7916507396762568293LL)) && (((/* implicit */_Bool) 8666334431255074403LL)))))))));
                                var_20 = arr_19 [i_7] [i_3] [(_Bool)1];
                            }
                        } 
                    } 
                    arr_32 [i_2] [i_3] [i_4 - 1] = -8080019903014972933LL;
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */long long int) (~(((/* implicit */int) var_15))))) - ((+(var_14)))))) ? (max((8080019903014972918LL), (var_1))) : (((/* implicit */long long int) (+(((/* implicit */int) ((((/* implicit */_Bool) 4687979958854508664LL)) && (((/* implicit */_Bool) 3284260281337695190LL))))))))));
}
