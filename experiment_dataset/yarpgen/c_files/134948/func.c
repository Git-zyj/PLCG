/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134948
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134948 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134948
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
    var_10 = ((/* implicit */long long int) max((1226034326984447508ULL), ((~(((((/* implicit */_Bool) 1226034326984447508ULL)) ? (((/* implicit */unsigned long long int) var_7)) : (1226034326984447508ULL)))))));
    var_11 = ((/* implicit */unsigned short) min((var_11), (((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((int) ((((/* implicit */_Bool) 17220709746725104108ULL)) ? (17220709746725104099ULL) : (1226034326984447504ULL))))), (1226034326984447508ULL))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            {
                var_12 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 1226034326984447517ULL)))))) / (17220709746725104099ULL)));
                arr_4 [i_0] [i_1] = ((/* implicit */int) (!(((/* implicit */_Bool) ((arr_0 [i_0]) ^ (arr_0 [i_0]))))));
                var_13 = ((/* implicit */unsigned int) min((var_13), (((/* implicit */unsigned int) (-(max((max((17220709746725104088ULL), (((/* implicit */unsigned long long int) arr_3 [16LL] [i_1])))), (1226034326984447517ULL))))))));
                var_14 = ((/* implicit */signed char) max((var_14), (((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_3 [(signed char)16] [i_1])), (1226034326984447497ULL)))) ? (((/* implicit */unsigned long long int) ((long long int) 1226034326984447535ULL))) : ((+(((((/* implicit */_Bool) 17220709746725104074ULL)) ? (((/* implicit */unsigned long long int) arr_2 [i_0] [i_1] [(signed char)24])) : (17220709746725104104ULL))))))))));
                /* LoopNest 2 */
                for (unsigned char i_2 = 4; i_2 < 24; i_2 += 4) 
                {
                    for (long long int i_3 = 1; i_3 < 22; i_3 += 4) 
                    {
                        {
                            arr_10 [i_0] [i_1] [i_2 - 2] [1LL] = min(((~(((long long int) 1226034326984447508ULL)))), (max((((long long int) 17220709746725104107ULL)), (((/* implicit */long long int) arr_5 [i_0] [23LL] [i_3 + 3])))));
                            var_15 = ((/* implicit */short) ((((/* implicit */_Bool) ((int) (+(17220709746725104120ULL))))) ? (((((/* implicit */_Bool) arr_0 [i_2 - 3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((1226034326984447527ULL) < (1226034326984447517ULL))))) : (17220709746725104113ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) (-(1226034326984447516ULL))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 3 */
    for (signed char i_4 = 1; i_4 < 21; i_4 += 1) 
    {
        for (int i_5 = 0; i_5 < 23; i_5 += 1) 
        {
            for (unsigned char i_6 = 0; i_6 < 23; i_6 += 1) 
            {
                {
                    var_16 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((unsigned short) (-(var_1))))), (((((((/* implicit */unsigned long long int) arr_16 [i_4] [16ULL] [i_4] [i_4])) % (17220709746725104107ULL))) ^ (((((/* implicit */_Bool) 17220709746725104100ULL)) ? (arr_7 [i_4] [i_4 + 2]) : (1226034326984447516ULL)))))));
                    var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 1226034326984447508ULL)) ? (17220709746725104108ULL) : (17220709746725104096ULL)));
                    arr_18 [i_4] [i_5] [i_4] [i_6] = ((/* implicit */short) 17220709746725104099ULL);
                    arr_19 [i_4] [i_5] [i_5] [i_4] = 1226034326984447516ULL;
                }
            } 
        } 
    } 
}
