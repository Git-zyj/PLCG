/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112686
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112686 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112686
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
    for (int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_12 = ((/* implicit */unsigned long long int) max((var_12), (((/* implicit */unsigned long long int) min((arr_2 [16LL] [17U] [i_3]), (((/* implicit */long long int) arr_7 [(signed char)14] [(short)12] [i_2] [i_2] [i_3])))))));
                            var_13 = ((/* implicit */unsigned long long int) 761309434);
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    for (short i_5 = 0; i_5 < 20; i_5 += 4) 
                    {
                        for (unsigned int i_6 = 4; i_6 < 17; i_6 += 1) 
                        {
                            {
                                arr_16 [i_1] [i_6] = (!(((/* implicit */_Bool) (short)0)));
                                arr_17 [i_0] [i_6] [i_0] = max((((/* implicit */unsigned long long int) -2275188344490495420LL)), (((((/* implicit */_Bool) arr_5 [i_0] [i_6] [i_5] [i_5])) ? (2911341234087283658ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_1] [i_4] [i_5] [(unsigned short)3]))))));
                                arr_18 [i_0] [i_1] [i_6] [i_0] = ((/* implicit */int) arr_5 [i_1] [i_1] [i_1] [i_6]);
                                arr_19 [i_6] [(short)16] [(short)16] [i_5] = ((/* implicit */unsigned short) arr_3 [i_1] [i_1] [i_6]);
                                var_14 = ((/* implicit */long long int) -1189019447);
                            }
                        } 
                    } 
                } 
                arr_20 [i_1 - 1] [0LL] [0LL] = ((/* implicit */unsigned long long int) min((min((1786758731U), (((/* implicit */unsigned int) (signed char)99)))), (((/* implicit */unsigned int) var_11))));
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned short) var_2);
    /* LoopNest 2 */
    for (unsigned long long int i_7 = 0; i_7 < 20; i_7 += 4) 
    {
        for (unsigned char i_8 = 0; i_8 < 20; i_8 += 3) 
        {
            {
                arr_26 [i_8] [(unsigned short)19] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_15 [i_7] [(_Bool)1] [i_8] [i_8] [i_8]))));
                /* LoopNest 3 */
                for (long long int i_9 = 0; i_9 < 20; i_9 += 2) 
                {
                    for (unsigned int i_10 = 2; i_10 < 18; i_10 += 4) 
                    {
                        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                        {
                            {
                                var_16 = ((/* implicit */short) ((signed char) min((((/* implicit */unsigned int) arr_10 [i_7] [i_8] [i_10 + 1])), (var_9))));
                                var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) var_7))));
                            }
                        } 
                    } 
                } 
                var_18 = ((/* implicit */short) min((((/* implicit */long long int) 3179516517U)), (max((((/* implicit */long long int) arr_13 [(_Bool)1] [i_8] [i_8] [i_7] [i_7] [i_8] [i_7])), (3324397008703950676LL)))));
                var_19 = arr_23 [i_7] [i_8];
                var_20 ^= ((/* implicit */unsigned int) min((-451944324), (((/* implicit */int) var_11))));
            }
        } 
    } 
    var_21 = (-(15U));
}
