/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122169
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122169 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122169
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
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            for (signed char i_2 = 3; i_2 < 16; i_2 += 3) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 20; i_3 += 3) 
                {
                    {
                        var_18 = ((/* implicit */signed char) ((524287) & (((/* implicit */int) (!(((/* implicit */_Bool) (~(arr_8 [i_0] [i_0] [i_0] [i_2])))))))));
                        var_19 = ((/* implicit */unsigned long long int) arr_1 [i_0]);
                    }
                } 
            } 
        } 
        var_20 = ((/* implicit */unsigned char) arr_6 [11ULL] [10U] [i_0] [i_0]);
    }
    var_21 += max((min((var_15), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_4)), (var_14)))))), (((/* implicit */unsigned long long int) (signed char)-68)));
    /* LoopNest 2 */
    for (unsigned int i_4 = 0; i_4 < 15; i_4 += 1) 
    {
        for (unsigned int i_5 = 0; i_5 < 15; i_5 += 1) 
        {
            {
                var_22 &= ((/* implicit */unsigned char) (-(((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)67)) ? (var_5) : (((/* implicit */unsigned long long int) -2174396135577613247LL))))) && (((/* implicit */_Bool) arr_13 [i_4])))))));
                /* LoopNest 2 */
                for (signed char i_6 = 1; i_6 < 11; i_6 += 2) 
                {
                    for (unsigned short i_7 = 0; i_7 < 15; i_7 += 1) 
                    {
                        {
                            /* LoopSeq 1 */
                            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                            {
                                var_23 += ((/* implicit */signed char) 567453553048682496ULL);
                                var_24 = ((/* implicit */long long int) ((unsigned short) min(((~(((/* implicit */int) (_Bool)1)))), ((-(((/* implicit */int) arr_1 [15])))))));
                            }
                            var_25 = ((/* implicit */short) min((var_25), (((/* implicit */short) arr_4 [i_6] [i_6 + 1] [i_4]))));
                        }
                    } 
                } 
                var_26 = ((/* implicit */unsigned long long int) ((unsigned short) (!(((/* implicit */_Bool) (short)-7320)))));
            }
        } 
    } 
}
