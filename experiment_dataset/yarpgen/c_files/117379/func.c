/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117379
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117379 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117379
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
    for (short i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (unsigned short i_2 = 2; i_2 < 16; i_2 += 1) 
                {
                    for (unsigned char i_3 = 0; i_3 < 17; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 17; i_4 += 2) 
                        {
                            {
                                arr_11 [i_0] [i_1] [i_2] [i_1] [i_1] [i_3] [i_1] &= ((/* implicit */unsigned short) (unsigned char)202);
                                var_10 = (~((+((+(((/* implicit */int) (unsigned short)15729)))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned long long int i_5 = 2; i_5 < 16; i_5 += 1) 
                {
                    for (short i_6 = 0; i_6 < 17; i_6 += 3) 
                    {
                        {
                            var_11 = ((/* implicit */unsigned char) min(((-(9326365684697869976ULL))), (((((/* implicit */_Bool) 16831467835057973809ULL)) ? (((/* implicit */unsigned long long int) 1818891891U)) : (8ULL)))));
                            var_12 = ((/* implicit */int) ((((/* implicit */_Bool) 3061216130579248433LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (+(-3061216130579248435LL)))))))) : (9326365684697869983ULL)));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 3 */
    for (int i_7 = 1; i_7 < 15; i_7 += 1) 
    {
        for (int i_8 = 0; i_8 < 17; i_8 += 4) 
        {
            for (long long int i_9 = 0; i_9 < 17; i_9 += 1) 
            {
                {
                    arr_27 [i_7 + 2] [i_7] [i_7 + 2] [i_7 + 2] = ((/* implicit */unsigned long long int) 1818891883U);
                    var_13 ^= ((/* implicit */unsigned char) ((int) ((((/* implicit */_Bool) -221704742)) ? (-2495706493208812785LL) : (((/* implicit */long long int) 3272298416U)))));
                    var_14 -= ((/* implicit */short) ((((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_0)), (3876889142U)))) || (((((/* implicit */_Bool) (signed char)90)) || (((/* implicit */_Bool) arr_20 [i_7])))))) ? (154874999) : (((/* implicit */int) ((unsigned char) max((((/* implicit */long long int) (short)10183)), (arr_18 [i_9])))))));
                }
            } 
        } 
    } 
}
