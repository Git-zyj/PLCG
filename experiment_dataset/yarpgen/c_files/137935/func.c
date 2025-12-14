/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137935
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137935 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137935
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
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            {
                var_11 |= ((/* implicit */unsigned short) max((arr_0 [9]), (min((arr_0 [i_0]), (arr_0 [i_0])))));
                var_12 *= ((/* implicit */signed char) (short)-32759);
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 19; i_2 += 1) 
                {
                    for (int i_3 = 4; i_3 < 16; i_3 += 3) 
                    {
                        {
                            arr_11 [i_0] [i_1] [i_3] [i_3] = ((/* implicit */unsigned char) max((((((((/* implicit */_Bool) var_4)) && (arr_9 [i_0]))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) (unsigned short)39222)))) : (min((-5562543621557646138LL), (-5562543621557646131LL))))), (((/* implicit */long long int) var_5))));
                            var_13 &= ((/* implicit */int) var_6);
                            var_14 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_10 [i_3] [i_3 - 1] [i_3] [i_3 + 1]) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (max((((/* implicit */long long int) var_8)), (-5562543621557646131LL)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) arr_5 [i_0])) ? (1049912021) : (((/* implicit */int) var_3))))))) : (((var_10) ? (((/* implicit */unsigned int) ((-1049912021) / (((/* implicit */int) var_0))))) : (var_9)))));
                            arr_12 [i_1] [i_1] [i_2] [i_3] [i_2] = ((/* implicit */long long int) ((((((((/* implicit */_Bool) arr_4 [i_1])) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)55))))) >> (((((var_4) + (((/* implicit */unsigned int) ((/* implicit */int) (signed char)81))))) - (3009425436U))))) * (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) min((arr_7 [i_0] [5] [i_2] [9LL]), (arr_1 [i_3 - 4]))))))));
                        }
                    } 
                } 
                arr_13 [i_0] [i_1] [i_1] = ((/* implicit */unsigned short) 8096965710672499640ULL);
                var_15 = ((/* implicit */_Bool) min((var_15), (((/* implicit */_Bool) min((((/* implicit */int) arr_4 [i_0])), ((((_Bool)1) ? (((/* implicit */int) max((((/* implicit */unsigned char) var_0)), ((unsigned char)156)))) : ((-(((/* implicit */int) (_Bool)1)))))))))));
            }
        } 
    } 
    var_16 = ((/* implicit */long long int) min((var_9), (((((/* implicit */_Bool) ((8096965710672499664ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))) ? (((/* implicit */unsigned int) ((var_6) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_0))))) : (((((/* implicit */_Bool) -5562543621557646131LL)) ? (4294967295U) : (((/* implicit */unsigned int) -201985419))))))));
}
