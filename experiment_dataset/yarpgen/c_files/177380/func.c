/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177380
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177380 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177380
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
    for (short i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (signed char i_1 = 4; i_1 < 14; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 15; i_2 += 4) 
            {
                {
                    var_20 = ((/* implicit */short) max((((894825402) | (((/* implicit */int) max((((/* implicit */signed char) (_Bool)1)), (arr_1 [i_0] [i_1 - 4])))))), (((/* implicit */int) ((((/* implicit */int) var_0)) < (((/* implicit */int) var_12)))))));
                    var_21 |= ((/* implicit */unsigned int) var_8);
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) var_14))));
    /* LoopSeq 1 */
    for (long long int i_3 = 0; i_3 < 12; i_3 += 3) 
    {
        var_23 = ((/* implicit */_Bool) min((3757169243U), (((/* implicit */unsigned int) (_Bool)1))));
        /* LoopNest 2 */
        for (unsigned long long int i_4 = 1; i_4 < 10; i_4 += 4) 
        {
            for (unsigned int i_5 = 1; i_5 < 9; i_5 += 4) 
            {
                {
                    var_24 = ((/* implicit */unsigned short) max((((/* implicit */short) var_1)), ((short)-30066)));
                    var_25 ^= ((/* implicit */int) (((+(((/* implicit */int) (short)-30040)))) < (((/* implicit */int) min(((signed char)58), (((/* implicit */signed char) ((var_1) && (((/* implicit */_Bool) (signed char)43))))))))));
                    var_26 -= var_7;
                }
            } 
        } 
        arr_14 [i_3] = ((/* implicit */unsigned int) min(((((_Bool)1) ? (17158776713998431062ULL) : (18446744073709551615ULL))), (((/* implicit */unsigned long long int) ((((unsigned long long int) 18446744073709551615ULL)) > (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)8))))))));
    }
    /* LoopNest 2 */
    for (unsigned char i_6 = 1; i_6 < 17; i_6 += 4) 
    {
        for (long long int i_7 = 1; i_7 < 16; i_7 += 3) 
        {
            {
                arr_22 [i_6] = ((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-65)) > (((/* implicit */int) (_Bool)1))));
                arr_23 [i_6] = ((/* implicit */long long int) var_13);
            }
        } 
    } 
}
