/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146781
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146781 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146781
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
    for (unsigned long long int i_0 = 2; i_0 < 19; i_0 += 2) 
    {
        for (unsigned short i_1 = 2; i_1 < 21; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 23; i_2 += 4) 
            {
                {
                    arr_7 [i_0] [i_1] [i_2] = ((/* implicit */long long int) ((max((((/* implicit */long long int) (!(((/* implicit */_Bool) 3694585978083165077ULL))))), (var_5))) > (((/* implicit */long long int) (~(((/* implicit */int) var_9)))))));
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 23; i_3 += 2) 
                    {
                        for (short i_4 = 0; i_4 < 23; i_4 += 4) 
                        {
                            {
                                var_12 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (short)-18040)) : (((/* implicit */int) arr_5 [i_0] [i_0]))))) | ((~(var_8)))))), (((unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_4] [i_3] [i_2] [i_1 - 2])) ? (14752158095626386538ULL) : (((/* implicit */unsigned long long int) var_11)))))));
                                var_13 ^= ((/* implicit */unsigned char) var_10);
                                arr_12 [i_1 + 2] [i_1 + 2] [i_1 + 2] = ((/* implicit */short) (+(288230307432235008LL)));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_14 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_0)) ? (min((((((/* implicit */_Bool) 11183470399744021101ULL)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (-1683502722920926219LL))), (((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1))))))) : (((((/* implicit */_Bool) ((long long int) var_7))) ? (var_8) : (((/* implicit */long long int) ((((/* implicit */_Bool) 6453120197240947405LL)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_2)))))))));
    /* LoopNest 3 */
    for (signed char i_5 = 1; i_5 < 17; i_5 += 4) 
    {
        for (unsigned long long int i_6 = 1; i_6 < 17; i_6 += 1) 
        {
            for (unsigned char i_7 = 0; i_7 < 20; i_7 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_8 = 1; i_8 < 19; i_8 += 4) 
                    {
                        for (signed char i_9 = 0; i_9 < 20; i_9 += 2) 
                        {
                            {
                                var_15 = ((/* implicit */signed char) (short)-15197);
                                arr_26 [5ULL] [i_8 + 1] [i_8 - 1] [i_8 - 1] [i_8 + 1] = ((/* implicit */signed char) 1041484271U);
                            }
                        } 
                    } 
                    arr_27 [i_6] [i_6] [i_7] [i_5 - 1] &= ((/* implicit */int) ((long long int) var_10));
                }
            } 
        } 
    } 
}
