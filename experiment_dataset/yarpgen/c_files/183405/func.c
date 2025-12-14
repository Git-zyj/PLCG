/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183405
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183405 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183405
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
    var_10 = ((/* implicit */short) var_9);
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 15; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            {
                var_11 = ((/* implicit */signed char) min((var_11), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)-71))))) - (max(((~(15831816588166331333ULL))), (((/* implicit */unsigned long long int) min((var_5), (var_3)))))))))));
                arr_6 [i_0] = ((/* implicit */signed char) ((min((min((15831816588166331333ULL), (((/* implicit */unsigned long long int) (signed char)-21)))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (signed char)-19))))))) > (min((2614927485543220270ULL), (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) + (var_2)))))));
                arr_7 [i_0] [i_1] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) max(((unsigned short)27033), (((/* implicit */unsigned short) var_8)))))) % (min((var_6), (((/* implicit */unsigned long long int) ((var_9) & (((/* implicit */long long int) ((/* implicit */int) (signed char)104))))))))));
                arr_8 [(signed char)12] [i_0] [i_1] = (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */int) (short)20255)) / (((/* implicit */int) (short)-19146))))) / (8ULL)))));
            }
        } 
    } 
    var_12 = ((/* implicit */unsigned int) max((15831816588166331324ULL), (((/* implicit */unsigned long long int) var_7))));
    /* LoopNest 2 */
    for (unsigned long long int i_2 = 0; i_2 < 25; i_2 += 1) 
    {
        for (long long int i_3 = 0; i_3 < 25; i_3 += 4) 
        {
            {
                arr_14 [20LL] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) + (2614927485543220300ULL))) & (((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)-107))))))))));
                /* LoopNest 2 */
                for (unsigned int i_4 = 2; i_4 < 24; i_4 += 1) 
                {
                    for (signed char i_5 = 0; i_5 < 25; i_5 += 1) 
                    {
                        {
                            arr_20 [i_2] [i_2] [i_4] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_3))) <= (((((/* implicit */unsigned int) ((/* implicit */int) max(((signed char)-1), ((signed char)72))))) + (min((1086927227U), (((/* implicit */unsigned int) var_5))))))));
                            arr_21 [i_2] [i_4] [i_4] [(signed char)11] = ((/* implicit */long long int) (~(((/* implicit */int) (signed char)-86))));
                            var_13 = ((/* implicit */_Bool) (-(((2614927485543220280ULL) ^ (2614927485543220283ULL)))));
                            var_14 *= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)20259))))) ? (((((/* implicit */int) (unsigned short)33632)) & (((/* implicit */int) var_0)))) : (((((/* implicit */_Bool) (signed char)-7)) ? (((/* implicit */int) (signed char)89)) : (((/* implicit */int) var_7))))))) ? ((((_Bool)1) ? (7572640240907814005ULL) : (7572640240907813994ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                        }
                    } 
                } 
                arr_22 [i_2] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)29)) >> (((18423371330525045267ULL) - (18423371330525045239ULL)))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)38)) ? (((/* implicit */int) (unsigned short)734)) : (((/* implicit */int) (_Bool)1)))))));
            }
        } 
    } 
}
