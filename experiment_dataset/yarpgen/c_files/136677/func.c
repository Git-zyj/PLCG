/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136677
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136677 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136677
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
    for (unsigned int i_0 = 4; i_0 < 12; i_0 += 4) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (unsigned char i_2 = 1; i_2 < 11; i_2 += 3) 
                {
                    for (signed char i_3 = 0; i_3 < 13; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 13; i_4 += 1) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned short) 16130105860178878316ULL);
                                arr_13 [i_0 + 1] [i_1] [i_2] [i_1] [i_1] = (_Bool)1;
                            }
                        } 
                    } 
                } 
                var_16 = ((/* implicit */short) ((((/* implicit */_Bool) 14227360669255392753ULL)) ? (((/* implicit */unsigned long long int) max((3590484004U), (((/* implicit */unsigned int) var_11))))) : (((((/* implicit */_Bool) ((22ULL) >> (((((/* implicit */int) (short)-23442)) + (23489)))))) ? (min((18446744073709551583ULL), (18446744073709551583ULL))) : (12ULL)))));
                arr_14 [i_1] = ((/* implicit */unsigned short) (_Bool)1);
                var_17 = ((/* implicit */int) min((var_17), ((+((-(((/* implicit */int) var_12))))))));
                /* LoopNest 2 */
                for (long long int i_5 = 1; i_5 < 12; i_5 += 1) 
                {
                    for (unsigned long long int i_6 = 0; i_6 < 13; i_6 += 3) 
                    {
                        {
                            arr_19 [i_0] [i_1] [(unsigned char)12] [i_1] &= ((/* implicit */short) var_14);
                            arr_20 [(signed char)9] [i_1] = ((/* implicit */signed char) max((-3373331403706988626LL), (((/* implicit */long long int) ((((/* implicit */int) var_9)) != (((/* implicit */int) (unsigned char)140)))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_18 = ((var_7) / (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) var_1)))));
}
