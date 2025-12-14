/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185579
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185579 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185579
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
    for (short i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (short i_1 = 0; i_1 < 22; i_1 += 4) /* same iter space */
        {
            var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) var_19))));
            var_21 = ((/* implicit */unsigned char) ((unsigned short) arr_0 [i_0]));
        }
        for (short i_2 = 0; i_2 < 22; i_2 += 4) /* same iter space */
        {
            arr_6 [i_0] [i_0] [i_2] = ((short) (-(((/* implicit */int) (short)17352))));
            arr_7 [i_0] [i_0] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_2 [i_0] [i_2])) : (var_5))) - (max((var_5), (((/* implicit */int) (short)17352))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0]))) : (((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)0)))))) & (63397306U)))));
        }
        var_22 = arr_5 [i_0];
    }
    /* vectorizable */
    for (unsigned char i_3 = 4; i_3 < 12; i_3 += 1) 
    {
        arr_11 [i_3] [i_3] = arr_8 [i_3] [i_3];
        arr_12 [i_3] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_0 [i_3 + 1]))));
        var_23 = ((/* implicit */_Bool) ((unsigned long long int) (unsigned char)68));
        arr_13 [i_3] [i_3] |= ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_8 [i_3 - 3] [i_3 - 3]))));
        var_24 = ((/* implicit */unsigned char) var_19);
    }
    var_25 = ((/* implicit */unsigned long long int) max((var_25), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)76)))))));
    var_26 = ((/* implicit */signed char) max((((((((/* implicit */_Bool) (signed char)-3)) && (((/* implicit */_Bool) (short)-17342)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)51))) : ((~(483622303U))))), (((/* implicit */unsigned int) ((unsigned char) max((((/* implicit */unsigned long long int) var_12)), (var_9)))))));
    var_27 = ((/* implicit */unsigned char) var_6);
    /* LoopNest 3 */
    for (unsigned short i_4 = 0; i_4 < 18; i_4 += 4) 
    {
        for (unsigned long long int i_5 = 0; i_5 < 18; i_5 += 1) 
        {
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                {
                    arr_21 [i_5] [i_6] [i_5] [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_19))) : (63397306U)))) % ((-(4800859791784846594LL)))))) ? (((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_19 [i_4] [i_4] [i_4] [i_4]))))) && (((/* implicit */_Bool) max((arr_14 [i_6] [i_5]), (((/* implicit */unsigned short) arr_3 [i_4] [i_4])))))))) : ((~((-(arr_18 [i_4] [i_4] [i_5])))))));
                    var_28 = ((/* implicit */signed char) min((var_28), (((/* implicit */signed char) ((((((var_5) <= (((/* implicit */int) (short)29649)))) ? (var_10) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_16 [i_4])) ? (((/* implicit */int) arr_15 [i_5])) : (((/* implicit */int) var_0))))))) / (((((((/* implicit */_Bool) var_6)) ? (var_9) : (((/* implicit */unsigned long long int) arr_18 [i_4] [i_5] [i_4])))) % ((-(10571854846083836801ULL))))))))));
                    var_29 ^= ((/* implicit */signed char) arr_3 [i_6] [i_4]);
                }
            } 
        } 
    } 
}
