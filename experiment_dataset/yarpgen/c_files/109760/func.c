/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109760
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109760 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109760
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
    var_14 = ((/* implicit */signed char) min((var_14), (((/* implicit */signed char) ((((_Bool) min((((/* implicit */short) (_Bool)1)), ((short)-24711)))) ? (((/* implicit */int) ((((/* implicit */int) var_0)) <= (((/* implicit */int) var_3))))) : (((/* implicit */int) var_3)))))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 3; i_2 < 21; i_2 += 1) 
            {
                {
                    var_15 = ((/* implicit */unsigned char) (((_Bool)0) ? (((13250429010299192624ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) (short)28278))))) : (((unsigned long long int) (short)7886))));
                    arr_9 [i_2] [i_2] [i_0] = ((/* implicit */unsigned char) min((((((/* implicit */int) (_Bool)1)) | (((((/* implicit */int) (unsigned char)198)) | (((/* implicit */int) (short)-28279)))))), (((/* implicit */int) ((unsigned char) (short)-32765)))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_3 = 0; i_3 < 15; i_3 += 4) 
    {
        for (signed char i_4 = 1; i_4 < 13; i_4 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_5 = 0; i_5 < 15; i_5 += 4) 
                {
                    for (short i_6 = 2; i_6 < 12; i_6 += 1) 
                    {
                        {
                            var_16 = ((/* implicit */short) ((max((((/* implicit */unsigned long long int) min((var_1), (((/* implicit */unsigned char) (signed char)62))))), (((((/* implicit */_Bool) var_2)) ? (4209629386582852827ULL) : (939524096ULL))))) >> (((((int) ((((/* implicit */_Bool) (short)28278)) ? (((/* implicit */int) (short)32765)) : (((/* implicit */int) var_10))))) - (32735)))));
                            arr_18 [1] [i_3] [i_4] [i_6] [i_6 + 3] = ((/* implicit */unsigned long long int) min((((/* implicit */int) var_13)), ((~(((/* implicit */int) (short)-28278))))));
                            arr_19 [(unsigned char)8] [(unsigned char)8] [12U] [i_6] = ((short) ((((/* implicit */_Bool) (short)-1410)) || ((_Bool)1)));
                        }
                    } 
                } 
                arr_20 [i_3] [i_3] [i_4] = ((/* implicit */int) (short)28279);
                var_17 = ((/* implicit */short) ((((((/* implicit */_Bool) var_3)) ? (2004628189) : (((/* implicit */int) var_5)))) / (((/* implicit */int) (unsigned char)151))));
                var_18 = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-65))) * (13228384588716543784ULL)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (short)-20453)) : (((/* implicit */int) (short)-32761))))))))) % (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_9)) : (-1661211098)))) ? (((((/* implicit */_Bool) (unsigned char)58)) ? (7652834521622491721LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-28258))))) : (((/* implicit */long long int) 476702832))))));
            }
        } 
    } 
    var_19 = ((/* implicit */_Bool) min((((/* implicit */short) (!(((/* implicit */_Bool) var_11))))), (min((((/* implicit */short) var_1)), (max((((/* implicit */short) (unsigned char)255)), ((short)616)))))));
}
