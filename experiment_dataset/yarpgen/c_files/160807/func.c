/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160807
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160807 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160807
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
    var_11 = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) (short)12963)), (var_7)));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            for (int i_2 = 4; i_2 < 21; i_2 += 2) 
            {
                {
                    var_12 = ((/* implicit */unsigned long long int) ((((min((1395171789854012107ULL), (((/* implicit */unsigned long long int) (short)17461)))) > (((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1))))))) ? (((/* implicit */int) (short)-12963)) : (var_3)));
                    var_13 -= ((/* implicit */long long int) arr_5 [i_0] [i_1] [i_1]);
                    var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_0 [i_1]) & (((/* implicit */int) arr_2 [i_0]))))) ? (((/* implicit */int) ((2147482624) != (((/* implicit */int) (unsigned short)0))))) : (((((/* implicit */_Bool) 7357254136398811747ULL)) ? (((/* implicit */int) (short)12963)) : (((/* implicit */int) (short)12989))))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 23; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 23; i_4 += 4) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned long long int) arr_4 [i_1]);
                                var_16 = ((/* implicit */long long int) max((((unsigned char) var_8)), (((/* implicit */unsigned char) ((arr_10 [i_2 - 1] [i_2 + 1] [i_2 + 1]) != (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0))))))));
                                var_17 = ((/* implicit */_Bool) (unsigned char)229);
                            }
                        } 
                    } 
                    var_18 = ((_Bool) 4294967295ULL);
                }
            } 
        } 
        var_19 = ((/* implicit */int) max((((/* implicit */unsigned long long int) (unsigned char)232)), (4294967295ULL)));
    }
    var_20 = ((/* implicit */int) min((((/* implicit */short) var_8)), ((short)12956)));
}
