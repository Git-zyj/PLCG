/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125005
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125005 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125005
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
    var_14 |= ((/* implicit */unsigned short) ((((/* implicit */int) var_12)) >= (((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))));
    var_15 = ((/* implicit */unsigned short) 3859636688U);
    var_16 = ((/* implicit */int) (-(var_8)));
    /* LoopSeq 3 */
    for (signed char i_0 = 2; i_0 < 6; i_0 += 4) 
    {
        /* LoopSeq 2 */
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            var_17 = ((/* implicit */signed char) var_7);
            var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) (-(((/* implicit */int) ((signed char) -2767271261012113238LL))))))));
            var_19 = ((/* implicit */_Bool) ((unsigned short) ((1610604491058515476LL) >> (((((unsigned int) var_4)) - (1599018316U))))));
            var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)0))))) ? (max((((/* implicit */long long int) var_1)), (var_0))) : (((/* implicit */long long int) (+(((/* implicit */int) (signed char)53))))))))));
        }
        for (unsigned long long int i_2 = 1; i_2 < 8; i_2 += 3) 
        {
            var_21 = ((/* implicit */long long int) ((((/* implicit */int) ((signed char) ((((/* implicit */_Bool) arr_1 [i_0] [i_2])) ? (((/* implicit */unsigned int) -4696857)) : (4294967295U))))) & ((+(((/* implicit */int) var_6))))));
            /* LoopSeq 1 */
            for (signed char i_3 = 0; i_3 < 10; i_3 += 3) 
            {
                var_22 = ((/* implicit */int) min((var_22), (((/* implicit */int) ((((((/* implicit */_Bool) (unsigned char)16)) ? (arr_0 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65522))))) != (((/* implicit */unsigned long long int) -1390191980879535646LL)))))));
                var_23 |= ((/* implicit */unsigned int) arr_6 [i_0] [i_0] [i_0]);
                var_24 = ((/* implicit */unsigned long long int) max((var_24), (((/* implicit */unsigned long long int) (unsigned char)212))));
                var_25 = ((/* implicit */unsigned short) arr_0 [i_0]);
            }
            var_26 = ((/* implicit */signed char) (~(min((((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) -1558220394)) : (3437340868U)))), (arr_3 [i_0 - 2] [i_2 - 1])))));
        }
        var_27 = ((/* implicit */unsigned char) var_0);
        var_28 = ((/* implicit */unsigned int) min(((-(((/* implicit */int) arr_2 [i_0 + 1] [i_0 + 1] [i_0 + 1])))), (((/* implicit */int) arr_2 [i_0 - 1] [i_0 + 1] [i_0 + 1]))));
    }
    for (long long int i_4 = 0; i_4 < 13; i_4 += 3) 
    {
        var_29 = ((/* implicit */signed char) ((((((/* implicit */long long int) ((/* implicit */int) arr_8 [i_4]))) - (-1390191980879535646LL))) < (((/* implicit */long long int) ((/* implicit */int) max((arr_9 [i_4]), (arr_9 [i_4])))))));
        var_30 = ((/* implicit */unsigned short) var_13);
    }
    for (unsigned char i_5 = 0; i_5 < 19; i_5 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_6 = 1; i_6 < 18; i_6 += 1) 
        {
            for (unsigned int i_7 = 0; i_7 < 19; i_7 += 2) 
            {
                {
                    var_31 = ((((((/* implicit */_Bool) (unsigned short)11273)) ? (((/* implicit */int) arr_15 [i_5] [i_6 + 1] [i_7])) : (((/* implicit */int) arr_15 [i_5] [i_6] [(unsigned short)12])))) < (((/* implicit */int) ((_Bool) (signed char)-1))));
                    var_32 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_15 [i_5] [i_6 - 1] [i_6 - 1])))) < (((((/* implicit */_Bool) ((int) var_2))) ? (arr_17 [i_5] [i_6 + 1]) : (((/* implicit */long long int) ((/* implicit */int) var_13)))))));
                }
            } 
        } 
        var_33 ^= ((/* implicit */unsigned short) min(((+(((/* implicit */int) arr_11 [i_5] [i_5])))), (((/* implicit */int) ((((/* implicit */int) (short)15117)) > (((/* implicit */int) (unsigned short)9147)))))));
    }
}
