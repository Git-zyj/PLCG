/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111196
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111196 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111196
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
    for (signed char i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        var_11 *= ((/* implicit */unsigned long long int) arr_3 [i_0]);
        arr_4 [i_0] = ((/* implicit */signed char) -492447780);
        arr_5 [i_0] = ((((((/* implicit */_Bool) max((8773208845340127896ULL), (((/* implicit */unsigned long long int) (unsigned short)4075))))) ? (arr_3 [(_Bool)1]) : (max((((/* implicit */int) arr_2 [i_0])), (-492447780))))) == (((/* implicit */int) ((((/* implicit */_Bool) arr_1 [18ULL] [18ULL])) && (((/* implicit */_Bool) (short)26535))))));
    }
    for (signed char i_1 = 0; i_1 < 25; i_1 += 2) 
    {
        arr_10 [(_Bool)1] |= ((((/* implicit */_Bool) ((arr_6 [i_1]) ? (min((arr_7 [i_1]), (((/* implicit */long long int) (unsigned short)4075)))) : (min((((/* implicit */long long int) 2096896)), (arr_7 [i_1])))))) ? (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) != (2096896)))) : (min((arr_3 [i_1]), (((/* implicit */int) (unsigned short)64437)))));
        /* LoopSeq 3 */
        for (short i_2 = 1; i_2 < 24; i_2 += 3) 
        {
            var_12 = ((/* implicit */int) arr_9 [(_Bool)1] [i_2 + 1]);
            var_13 = ((/* implicit */unsigned short) max((var_13), (((/* implicit */unsigned short) arr_3 [i_2 - 1]))));
        }
        for (int i_3 = 0; i_3 < 25; i_3 += 1) 
        {
            arr_15 [(unsigned char)2] [(unsigned char)2] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_0 [i_1] [i_3])) ? (((/* implicit */int) arr_0 [i_3] [i_1])) : (((/* implicit */int) arr_0 [i_3] [i_1])))) | (((/* implicit */int) arr_6 [i_3]))));
            /* LoopSeq 1 */
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                arr_19 [i_4] [i_4] = ((/* implicit */_Bool) min((((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)232))) != (max((0U), (((/* implicit */unsigned int) -2096897))))))), (min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)1099)))));
                arr_20 [i_1] [i_4] [4U] = ((/* implicit */signed char) ((short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_1] [i_4]))) % (((1781633153455321747ULL) >> (((((/* implicit */int) (unsigned short)22446)) - (22400))))))));
            }
            /* LoopSeq 1 */
            for (unsigned char i_5 = 1; i_5 < 21; i_5 += 2) 
            {
                arr_25 [i_1] [i_5] = ((/* implicit */_Bool) ((short) 67108863));
                arr_26 [i_5] [i_3] [i_5] [i_1] = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_5 + 4]))) <= (max((1109864025U), (((/* implicit */unsigned int) arr_14 [i_5 + 3]))))));
            }
        }
        for (signed char i_6 = 2; i_6 < 23; i_6 += 2) 
        {
            arr_29 [i_1] [i_1] [i_1] = ((/* implicit */short) ((_Bool) arr_27 [i_1] [i_6]));
            var_14 &= ((/* implicit */signed char) arr_9 [i_6] [(short)24]);
            var_15 *= ((/* implicit */unsigned short) (+(((/* implicit */int) arr_13 [23U]))));
            var_16 += max((((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)91))))) ? (((/* implicit */int) min((((/* implicit */unsigned short) arr_0 [i_1] [i_6])), ((unsigned short)61461)))) : (((/* implicit */int) max((((/* implicit */unsigned char) arr_23 [22] [22])), ((unsigned char)210)))))), (((/* implicit */int) min((arr_9 [i_6] [i_6 + 1]), (arr_9 [i_6] [i_6 - 1])))));
            var_17 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_6 + 2] [i_1]))) / (((((/* implicit */unsigned int) ((/* implicit */int) (signed char)40))) * (2335299667U)))))) || (((/* implicit */_Bool) min((arr_21 [i_1] [(unsigned short)11] [i_6 + 2] [i_1]), (arr_21 [i_1] [i_6 - 2] [i_6 - 2] [i_1]))))));
        }
    }
    /* LoopSeq 1 */
    for (unsigned long long int i_7 = 0; i_7 < 18; i_7 += 2) 
    {
        arr_33 [i_7] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_7] [i_7])) && (((/* implicit */_Bool) ((unsigned long long int) min((arr_18 [i_7] [i_7]), (((/* implicit */short) arr_17 [i_7]))))))));
        arr_34 [15ULL] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_0 [(unsigned char)12] [i_7])) & (((/* implicit */int) arr_0 [i_7] [i_7])))))));
        arr_35 [i_7] [i_7] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) (signed char)54)) ? (((/* implicit */int) (unsigned char)50)) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) arr_2 [i_7]))))) ? (((/* implicit */int) ((((/* implicit */int) (unsigned char)255)) != (((((/* implicit */_Bool) arr_9 [i_7] [(_Bool)1])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_9 [i_7] [(unsigned short)9]))))))) : (((((/* implicit */_Bool) (signed char)-32)) ? (((/* implicit */int) arr_1 [i_7] [i_7])) : (((/* implicit */int) arr_14 [i_7]))))));
    }
    var_18 = ((/* implicit */long long int) ((((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (unsigned char)70)) : (((/* implicit */int) var_8))))) ? (((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) var_7)))) : (((/* implicit */int) (signed char)54)))) * (((((/* implicit */int) max((var_5), (((/* implicit */unsigned short) var_10))))) + (((/* implicit */int) min((((/* implicit */signed char) (_Bool)1)), ((signed char)-94))))))));
    /* LoopSeq 3 */
    for (int i_8 = 3; i_8 < 22; i_8 += 1) 
    {
        arr_40 [(unsigned short)8] |= ((/* implicit */_Bool) min((((((/* implicit */_Bool) ((unsigned short) arr_23 [i_8 - 3] [i_8]))) ? (((arr_36 [i_8]) ? (((/* implicit */int) arr_37 [14U])) : (((/* implicit */int) arr_11 [i_8])))) : ((+(((/* implicit */int) arr_17 [(unsigned short)14])))))), (max(((+(((/* implicit */int) (unsigned short)0)))), (((/* implicit */int) (_Bool)1))))));
        arr_41 [i_8] [i_8] = ((/* implicit */unsigned char) ((signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) (_Bool)1)), (arr_1 [(unsigned short)23] [i_8 - 1])))) ? (((arr_6 [i_8]) ? (arr_21 [i_8] [i_8] [i_8] [i_8]) : (arr_21 [i_8] [i_8 + 3] [(signed char)24] [i_8]))) : (((/* implicit */unsigned int) (~(((/* implicit */int) (short)-21641))))))));
        var_19 = min((((/* implicit */unsigned int) (unsigned short)14813)), (((arr_21 [i_8] [i_8] [i_8 + 3] [i_8 + 3]) >> (((arr_21 [i_8 + 2] [i_8] [i_8 + 2] [i_8 + 3]) - (2455564667U))))));
        arr_42 [i_8] [i_8] = ((/* implicit */unsigned short) min((((long long int) (unsigned short)14336)), (max((arr_39 [i_8]), (arr_39 [i_8])))));
    }
    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
    {
        arr_46 [i_9] = ((((/* implicit */int) ((_Bool) arr_21 [i_9] [i_9] [i_9] [i_9]))) == (1174624402));
        var_20 = ((/* implicit */unsigned char) (_Bool)1);
    }
    for (short i_10 = 0; i_10 < 14; i_10 += 2) 
    {
        var_21 = ((/* implicit */unsigned char) min(((-(arr_16 [i_10] [i_10]))), (arr_16 [i_10] [i_10])));
        arr_51 [1] = ((/* implicit */unsigned int) max((((((/* implicit */int) arr_38 [13] [i_10])) & (((((/* implicit */_Bool) arr_28 [i_10])) ? (((/* implicit */int) arr_24 [i_10] [i_10] [i_10] [i_10])) : (((/* implicit */int) (unsigned short)19397)))))), (((/* implicit */int) arr_6 [i_10]))));
        arr_52 [(unsigned char)10] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) 9028502071298410352LL))))) >> (((max((1152660161), (((/* implicit */int) arr_1 [i_10] [i_10])))) - (1152660135)))))) ? (arr_12 [(unsigned short)9] [i_10]) : (((((/* implicit */int) ((signed char) (unsigned char)48))) % (arr_12 [i_10] [i_10])))));
    }
}
