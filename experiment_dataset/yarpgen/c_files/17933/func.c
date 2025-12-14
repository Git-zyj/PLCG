/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17933
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17933 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17933
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
    for (int i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (long long int i_1 = 2; i_1 < 12; i_1 += 1) 
        {
            {
                var_10 = ((/* implicit */long long int) max((((((/* implicit */_Bool) (signed char)-23)) ? (12482830412536117866ULL) : (((/* implicit */unsigned long long int) -2176057193712669564LL)))), (((/* implicit */unsigned long long int) (!(((((/* implicit */unsigned long long int) -4654469153326467646LL)) <= (var_0))))))));
                /* LoopNest 2 */
                for (unsigned int i_2 = 1; i_2 < 12; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                    {
                        {
                            var_11 = ((/* implicit */_Bool) max(((+(max((((/* implicit */long long int) var_4)), (arr_2 [i_0]))))), (((/* implicit */long long int) ((((((/* implicit */int) arr_5 [(signed char)0] [i_2 + 2] [i_3])) - (((/* implicit */int) var_2)))) * (((((/* implicit */int) arr_8 [i_0] [i_1] [i_1] [i_1])) - (((/* implicit */int) var_4)))))))));
                            arr_9 [i_1] [i_2] [i_1] [i_1] = ((/* implicit */unsigned char) (-(arr_1 [i_0] [i_1 + 2])));
                            var_12 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 5963913661173433749ULL)) ? ((+(-2176057193712669573LL))) : (((/* implicit */long long int) ((/* implicit */int) ((18446744073709551598ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_3] [i_1] [i_1])))))))))) ? (((/* implicit */int) max((((arr_6 [i_1] [i_1 - 2]) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))), (((arr_0 [i_2]) == (((/* implicit */int) (_Bool)0))))))) : (((/* implicit */int) ((((/* implicit */_Bool) 2163780359164253303ULL)) && ((_Bool)1))))));
                            arr_10 [i_1] [i_2 + 1] [(signed char)3] [i_1] = ((/* implicit */int) max((((max((((/* implicit */unsigned long long int) arr_8 [i_0] [i_0] [i_2] [i_1])), (arr_6 [i_1] [i_1]))) < (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_9), ((_Bool)1))))))), ((!(((/* implicit */_Bool) arr_1 [i_1 + 1] [i_1 + 1]))))));
                        }
                    } 
                } 
                var_13 ^= ((/* implicit */signed char) max(((~(arr_1 [i_1 - 1] [i_1 + 1]))), (((/* implicit */int) ((max((var_5), (((/* implicit */int) var_3)))) <= (((/* implicit */int) var_3)))))));
                var_14 = ((/* implicit */int) -2176057193712669570LL);
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((unsigned short) var_2)))));
    var_16 = ((/* implicit */int) ((((int) ((var_0) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))) < (((/* implicit */int) (_Bool)1))));
    var_17 = ((/* implicit */unsigned short) var_5);
    var_18 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_9)), (14481474651007564393ULL)))) ? ((((-(((/* implicit */int) var_7)))) + (var_5))) : (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_4)), (3965269422701987226ULL)))) ? (max((var_5), (((/* implicit */int) var_2)))) : (((/* implicit */int) var_3))))));
}
