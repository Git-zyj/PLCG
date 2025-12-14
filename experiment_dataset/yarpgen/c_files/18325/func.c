/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18325
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18325 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18325
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
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (long long int i_1 = 1; i_1 < 9; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 10; i_2 += 1) 
            {
                {
                    var_19 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(-2305843009213693952LL)))) ? (var_9) : (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) arr_6 [i_0] [i_0] [i_0] [i_0])))))))) ? (9223372036854775787LL) : (((/* implicit */long long int) ((((((/* implicit */unsigned long long int) 8896107906683936314LL)) <= (18446744073709551602ULL))) ? (((/* implicit */int) (short)32763)) : (((/* implicit */int) (_Bool)1)))))));
                    arr_7 [i_2] = ((/* implicit */short) (+(((/* implicit */int) max(((_Bool)1), ((_Bool)1))))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 1; i_3 < 9; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 10; i_4 += 1) 
                        {
                            {
                                var_20 -= ((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0] [i_0] [i_0])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))) ? ((((_Bool)1) ? (9005000231485440ULL) : (((/* implicit */unsigned long long int) 0U)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) >> ((((+(((/* implicit */int) (unsigned char)83)))) - (66)))));
                                arr_12 [i_1] [i_1] [i_4] [i_1] = ((/* implicit */unsigned char) (~(((/* implicit */int) ((unsigned short) arr_9 [i_3 + 1] [i_3 + 1] [i_3 + 1] [i_3 + 1] [i_3 - 1])))));
                                var_21 = ((/* implicit */short) ((((/* implicit */_Bool) 7986599618894098328ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))));
                                arr_13 [i_0] [i_4] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_4] [i_4] [i_4] [i_4] [i_4])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)96))))) & (((unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))));
                            }
                        } 
                    } 
                    arr_14 [i_2] = ((/* implicit */long long int) (((_Bool)0) ? (((/* implicit */unsigned int) ((/* implicit */int) max(((unsigned short)0), (((/* implicit */unsigned short) (_Bool)1)))))) : (((((/* implicit */unsigned int) ((/* implicit */int) min(((_Bool)1), (arr_1 [i_0]))))) & (var_9)))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) (!(((/* implicit */_Bool) (signed char)-50)))))));
    var_23 = ((/* implicit */unsigned char) ((int) (signed char)-76));
}
