/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169489
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169489 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169489
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
    for (signed char i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            {
                var_11 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_4 [(short)6]))))), (max((((/* implicit */unsigned long long int) (signed char)-32)), (18446744073709551615ULL)))))) ? (((/* implicit */int) arr_3 [i_0] [i_0] [(short)16])) : (((/* implicit */int) ((((((/* implicit */_Bool) 2296282872U)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_9)))) == (((((/* implicit */int) (short)18683)) ^ (((/* implicit */int) arr_0 [i_0])))))))));
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 23; i_2 += 2) 
                {
                    for (unsigned int i_3 = 0; i_3 < 23; i_3 += 3) 
                    {
                        {
                            arr_10 [13] [13] [i_0] [i_0] [i_3] [i_3] = ((((/* implicit */_Bool) 1779435230)) ? (((var_1) - (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)205)) ? (((/* implicit */int) arr_7 [i_0] [i_2] [i_2])) : (((/* implicit */int) arr_3 [i_0] [i_1] [(signed char)17]))))))) : (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) 2143035137)), (2349159940U)))));
                            var_12 = ((/* implicit */signed char) (-((-(((((/* implicit */int) (_Bool)0)) * (((/* implicit */int) (signed char)127))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_13 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) var_1)) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)1))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? ((~(var_8))) : (((/* implicit */int) var_5))))) : (12653830740078599091ULL)));
    /* LoopSeq 1 */
    for (unsigned int i_4 = 2; i_4 < 20; i_4 += 4) 
    {
        arr_13 [i_4] = ((/* implicit */short) ((((/* implicit */unsigned int) (~((~(0)))))) == (((((/* implicit */unsigned int) ((/* implicit */int) (!((_Bool)1))))) ^ (((((/* implicit */_Bool) -435097133056579774LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)186))) : (var_10)))))));
        var_14 |= ((/* implicit */signed char) max((-7658432697433937210LL), (((/* implicit */long long int) max(((((_Bool)1) ? (((/* implicit */int) (short)-19836)) : (-1983207944))), (((/* implicit */int) arr_7 [i_4] [i_4] [i_4])))))));
    }
    var_15 = ((/* implicit */long long int) var_5);
}
