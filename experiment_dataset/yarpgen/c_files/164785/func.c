/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164785
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164785 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164785
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
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (long long int i_1 = 4; i_1 < 10; i_1 += 2) 
        {
            for (unsigned short i_2 = 1; i_2 < 11; i_2 += 2) 
            {
                {
                    var_19 = -9103568154974571623LL;
                    var_20 -= ((/* implicit */unsigned long long int) ((var_18) * (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)15205)))));
                    arr_8 [i_2] = ((/* implicit */signed char) max((((((/* implicit */int) max((var_16), (var_11)))) << (((max((1042029840), (((/* implicit */int) var_2)))) - (1042029829))))), (((/* implicit */int) ((max((var_6), (var_12))) <= (((/* implicit */long long int) var_18)))))));
                }
            } 
        } 
        arr_9 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) || (((/* implicit */_Bool) var_1))));
    }
    for (unsigned long long int i_3 = 0; i_3 < 21; i_3 += 1) 
    {
        arr_12 [i_3] [i_3] = ((/* implicit */unsigned long long int) ((268433408U) != (((/* implicit */unsigned int) ((/* implicit */int) max((((((/* implicit */long long int) -1042029825)) >= (-9103568154974571623LL))), (var_5)))))));
        var_21 -= ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_6)) / (((((/* implicit */unsigned long long int) min((-1042029841), (((/* implicit */int) (short)-14935))))) & (((7733988267211498942ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))))))));
    }
    var_22 = ((/* implicit */unsigned long long int) ((var_14) || (((9103568154974571623LL) != (((-2807538307968567146LL) / (((/* implicit */long long int) 1042029840))))))));
    var_23 *= ((/* implicit */unsigned int) var_6);
    var_24 = ((/* implicit */unsigned int) min((var_24), (((/* implicit */unsigned int) var_10))));
    /* LoopNest 2 */
    for (int i_4 = 4; i_4 < 14; i_4 += 4) 
    {
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            {
                var_25 = ((/* implicit */unsigned char) 2147483647);
                var_26 = min((((((/* implicit */long long int) ((/* implicit */int) ((11429038366565247244ULL) >= (((/* implicit */unsigned long long int) 2441958192U)))))) * (-8877220094644576252LL))), (((/* implicit */long long int) var_11)));
            }
        } 
    } 
}
