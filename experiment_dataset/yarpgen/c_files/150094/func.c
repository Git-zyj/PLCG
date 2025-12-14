/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150094
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150094 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150094
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
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (short i_1 = 3; i_1 < 13; i_1 += 4) 
        {
            for (unsigned short i_2 = 2; i_2 < 12; i_2 += 2) 
            {
                {
                    var_16 *= ((/* implicit */unsigned short) (signed char)3);
                    var_17 *= 870181105461634040ULL;
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_3 = 0; i_3 < 14; i_3 += 4) 
    {
        for (unsigned char i_4 = 0; i_4 < 14; i_4 += 4) 
        {
            {
                var_18 ^= ((/* implicit */unsigned long long int) (signed char)-111);
                arr_13 [11LL] [5] = ((/* implicit */signed char) 17U);
                arr_14 [i_3] [i_4] &= ((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)-4)) % (((/* implicit */int) (unsigned char)1))));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned short) var_3);
    var_20 = ((/* implicit */unsigned short) var_3);
    /* LoopNest 3 */
    for (unsigned char i_5 = 0; i_5 < 14; i_5 += 2) 
    {
        for (unsigned int i_6 = 0; i_6 < 14; i_6 += 1) 
        {
            for (unsigned short i_7 = 0; i_7 < 14; i_7 += 1) 
            {
                {
                    arr_21 [i_7] [i_6] [i_5] = ((/* implicit */short) (_Bool)0);
                    var_21 = ((/* implicit */unsigned int) ((((var_4) | (((/* implicit */long long int) ((/* implicit */int) (unsigned char)28))))) + (((1171677605037936796LL) + (4555752875823856114LL)))));
                    var_22 = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */int) var_7)) < (var_0)))) | ((-(var_5)))));
                }
            } 
        } 
    } 
}
