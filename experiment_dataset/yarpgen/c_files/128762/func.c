/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128762
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128762 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128762
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
    for (signed char i_0 = 2; i_0 < 14; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 16; i_2 += 4) 
                {
                    for (short i_3 = 0; i_3 < 16; i_3 += 1) 
                    {
                        {
                            var_20 += ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */unsigned long long int) 9223372036854775807LL)) : ((~(4398045462528ULL)))))) ? (((((/* implicit */_Bool) (~(var_9)))) ? (((/* implicit */long long int) ((/* implicit */int) max(((unsigned short)65529), (((/* implicit */unsigned short) var_17)))))) : (max((arr_1 [i_0]), (-9223372036854775802LL))))) : ((~(max((-9223372036854775792LL), (9223372036854775807LL))))));
                            var_21 = (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */long long int) arr_7 [i_0] [i_1] [i_2] [i_0 - 1])) : (11LL)))))) || ((!((!(((/* implicit */_Bool) (signed char)-49)))))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (int i_4 = 1; i_4 < 15; i_4 += 1) 
                {
                    var_22 ^= ((/* implicit */unsigned short) (+(arr_5 [i_0] [i_0] [i_1] [i_4 + 1])));
                    var_23 -= ((/* implicit */_Bool) ((short) (~(((/* implicit */int) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) arr_3 [i_1] [i_1]))))))));
                }
                var_24 = arr_9 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0];
            }
        } 
    } 
    var_25 = ((/* implicit */unsigned int) var_14);
    /* LoopSeq 1 */
    for (unsigned long long int i_5 = 1; i_5 < 15; i_5 += 4) 
    {
        /* LoopNest 3 */
        for (signed char i_6 = 0; i_6 < 16; i_6 += 2) 
        {
            for (signed char i_7 = 0; i_7 < 16; i_7 += 4) 
            {
                for (unsigned short i_8 = 1; i_8 < 15; i_8 += 4) 
                {
                    {
                        var_26 = ((/* implicit */_Bool) ((signed char) arr_7 [i_5] [i_6] [(signed char)4] [i_8]));
                        arr_25 [i_5] [i_6] [i_6] [i_8 - 1] [0] [i_7] = ((max((((/* implicit */long long int) (short)32762)), (((((/* implicit */_Bool) -1011943312)) ? (((/* implicit */long long int) -958100889)) : (9223372036854775805LL))))) > (((/* implicit */long long int) ((/* implicit */int) ((signed char) ((var_9) | (arr_5 [i_5] [(_Bool)1] [(_Bool)1] [i_8 + 1])))))));
                    }
                } 
            } 
        } 
        arr_26 [i_5] = ((/* implicit */_Bool) (~(((/* implicit */int) ((((((/* implicit */_Bool) 1184747908U)) && (((/* implicit */_Bool) (unsigned short)14)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (short)255)) ? (-2147483633) : (arr_7 [i_5] [i_5] [i_5] [i_5])))))))));
    }
}
