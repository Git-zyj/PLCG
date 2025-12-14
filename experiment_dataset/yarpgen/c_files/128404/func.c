/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128404
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128404 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128404
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
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 12; i_1 += 4) 
        {
            {
                var_12 &= ((/* implicit */signed char) (short)23040);
                var_13 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_11) ? (((/* implicit */long long int) arr_0 [i_0] [i_1])) : (var_6)))) ? (((/* implicit */long long int) ((/* implicit */int) (short)-21919))) : ((~(var_6)))))) ? (((/* implicit */long long int) ((((((/* implicit */int) (unsigned short)57513)) > (((/* implicit */int) var_10)))) ? (((((/* implicit */_Bool) (signed char)-91)) ? (4294967290U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)23040))))) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)96)))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-78)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)21918))) : (arr_3 [9])))) ? (((((/* implicit */_Bool) (short)-23040)) ? (((/* implicit */long long int) 3627530870U)) : (var_7))) : (((/* implicit */long long int) ((/* implicit */int) min(((unsigned short)57735), (var_8)))))))));
                var_14 = ((/* implicit */signed char) min(((!(((/* implicit */_Bool) arr_1 [i_1 - 1])))), ((!(((/* implicit */_Bool) ((short) arr_1 [i_0])))))));
                var_15 = min((var_0), (((unsigned short) max((var_0), (((/* implicit */unsigned short) var_4))))));
                var_16 |= ((/* implicit */int) ((unsigned int) ((unsigned short) (_Bool)1)));
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_2 = 2; i_2 < 22; i_2 += 3) 
    {
        for (unsigned char i_3 = 0; i_3 < 24; i_3 += 4) 
        {
            {
                var_17 = ((/* implicit */long long int) arr_8 [i_2] [i_3]);
                var_18 *= ((/* implicit */short) (~(min((max((((/* implicit */unsigned int) (signed char)(-127 - 1))), (arr_5 [i_3]))), (((/* implicit */unsigned int) (unsigned short)16483))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_4 = 0; i_4 < 15; i_4 += 2) 
    {
        for (short i_5 = 1; i_5 < 13; i_5 += 1) 
        {
            {
                arr_17 [i_5 + 1] [i_5] [i_4] = ((/* implicit */unsigned short) (~((+(((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_4] [14U])))))))));
                arr_18 [i_4] [i_5] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (((~(-1))) ^ ((~(((/* implicit */int) arr_11 [i_4] [i_5]))))))) ? ((-(((/* implicit */int) (signed char)-91)))) : (((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) 4294967295U)))))));
                var_19 = ((/* implicit */unsigned short) ((((/* implicit */int) min(((unsigned short)65526), (var_8)))) & (((/* implicit */int) min(((unsigned short)6037), (((/* implicit */unsigned short) arr_7 [i_4] [i_5 + 1] [i_4])))))));
            }
        } 
    } 
    var_20 *= ((/* implicit */unsigned short) (-(var_6)));
}
