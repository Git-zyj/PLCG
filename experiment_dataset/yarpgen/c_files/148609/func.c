/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148609
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148609 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148609
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
    for (unsigned int i_0 = 1; i_0 < 14; i_0 += 1) 
    {
        var_10 = ((/* implicit */unsigned short) ((((/* implicit */int) ((_Bool) arr_3 [i_0]))) * ((+(((/* implicit */int) arr_0 [11ULL]))))));
        arr_4 [i_0] [i_0] = ((((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)-32766))))) + (((((/* implicit */_Bool) ((short) (short)32741))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) var_9)), (arr_0 [i_0]))))) : ((~(12ULL))))));
        var_11 ^= ((/* implicit */unsigned char) (-(((((((/* implicit */_Bool) (short)-32758)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (12ULL))) + (((/* implicit */unsigned long long int) arr_2 [i_0 + 1] [i_0 + 1]))))));
    }
    var_12 = ((/* implicit */short) (+(var_4)));
    var_13 = ((/* implicit */unsigned int) (+(((((long long int) (_Bool)1)) * (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (short)-32741)) == (15)))))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (long long int i_1 = 0; i_1 < 16; i_1 += 3) 
    {
        var_14 = ((/* implicit */_Bool) max((var_14), (((_Bool) var_0))));
        var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) (~(((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_5 [2])) : (((/* implicit */int) (short)-32732)))))))));
        arr_8 [i_1] |= ((/* implicit */_Bool) (+(((/* implicit */int) arr_6 [i_1]))));
    }
    for (int i_2 = 0; i_2 < 25; i_2 += 4) 
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (long long int i_3 = 0; i_3 < 25; i_3 += 3) 
        {
            arr_15 [i_2] [i_3] [i_2] = ((/* implicit */signed char) ((((((/* implicit */int) arr_14 [i_3] [i_3] [i_3])) > (((/* implicit */int) (unsigned char)255)))) ? (arr_13 [i_3] [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_2])))));
            arr_16 [i_2] [(_Bool)1] [(short)13] = ((/* implicit */short) ((((/* implicit */int) ((signed char) (short)11515))) == ((-(((/* implicit */int) (unsigned short)31))))));
            var_16 -= ((/* implicit */signed char) ((unsigned int) 735010396));
            var_17 = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_14 [i_2] [i_2] [i_3]))));
        }
        /* vectorizable */
        for (short i_4 = 0; i_4 < 25; i_4 += 1) 
        {
            arr_19 [i_4] [i_4] = ((/* implicit */short) arr_11 [i_2]);
            arr_20 [i_2] [i_4] = (~(((/* implicit */int) (unsigned short)36)));
            var_18 = ((/* implicit */long long int) arr_12 [i_2]);
            arr_21 [i_4] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_18 [i_2] [i_4] [i_2])) != ((~(((/* implicit */int) var_9))))));
            arr_22 [i_4] = ((/* implicit */int) ((short) 0ULL));
        }
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) ((((/* implicit */_Bool) max((((long long int) 10682658807857026338ULL)), (((/* implicit */long long int) (+(((/* implicit */int) var_2)))))))) ? ((~(((/* implicit */int) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) (short)25377))))))) : ((~(((/* implicit */int) arr_18 [i_5] [i_2] [(signed char)22])))))))));
            var_20 += (((+(((/* implicit */int) var_9)))) * ((+(((/* implicit */int) arr_11 [i_5])))));
            arr_25 [i_2] [i_2] = ((/* implicit */unsigned int) (-(((/* implicit */int) ((signed char) ((((/* implicit */_Bool) (short)32762)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_5))))))));
            var_21 = ((/* implicit */int) arr_13 [i_2] [i_5]);
        }
        arr_26 [i_2] = ((/* implicit */unsigned long long int) var_2);
    }
    for (unsigned char i_6 = 1; i_6 < 19; i_6 += 4) 
    {
        var_22 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) arr_13 [i_6 - 1] [i_6 + 1])) ? (((((/* implicit */_Bool) 18446744073709551604ULL)) ? (((/* implicit */long long int) 4294967291U)) : (arr_23 [i_6 + 1]))) : (((/* implicit */long long int) (+(arr_13 [i_6 - 1] [i_6]))))))));
        /* LoopSeq 4 */
        for (unsigned long long int i_7 = 0; i_7 < 21; i_7 += 4) 
        {
            var_23 = ((/* implicit */signed char) 13ULL);
            arr_32 [i_6 - 1] [(unsigned short)7] [i_6] = ((/* implicit */unsigned long long int) (_Bool)1);
            var_24 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) * (4294967288U)))) ? (arr_28 [i_6 + 2]) : (((((/* implicit */_Bool) arr_28 [i_6 + 2])) ? (arr_28 [i_6 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_6] [i_6 - 1] [i_6 + 2])))))));
            arr_33 [i_6] [i_6] = var_5;
        }
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
        {
            var_25 = ((/* implicit */long long int) (-(arr_12 [i_6 - 1])));
            var_26 *= ((/* implicit */short) (~(((min((arr_17 [i_6] [i_6] [i_8]), ((_Bool)1))) ? (((/* implicit */int) arr_36 [(_Bool)1] [(_Bool)1])) : (((/* implicit */int) ((short) arr_27 [i_6])))))));
            var_27 = ((((/* implicit */_Bool) min(((unsigned short)65515), (((/* implicit */unsigned short) ((_Bool) arr_11 [i_8])))))) ? (((/* implicit */unsigned long long int) (+((-(((/* implicit */int) var_7))))))) : (min((((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)32758))))), (var_3))));
            arr_37 [i_6] [i_6] = var_3;
        }
        for (short i_9 = 2; i_9 < 19; i_9 += 4) 
        {
            arr_40 [i_6] = ((/* implicit */_Bool) (+(((/* implicit */int) (signed char)39))));
            arr_41 [i_6] = ((/* implicit */long long int) 65388027);
        }
        for (signed char i_10 = 0; i_10 < 21; i_10 += 4) 
        {
            arr_44 [i_6] [i_6] [i_6] = ((/* implicit */unsigned char) ((signed char) ((((/* implicit */int) (((-2147483647 - 1)) <= (((/* implicit */int) (short)-9462))))) ^ (((/* implicit */int) ((var_3) == (((/* implicit */unsigned long long int) 1581714103))))))));
            var_28 = ((/* implicit */int) max((((/* implicit */signed char) var_2)), (((signed char) (unsigned short)22387))));
        }
        var_29 = ((/* implicit */int) ((unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_27 [i_6 + 1]))) > (((((/* implicit */_Bool) (unsigned char)236)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (8415652038915110149ULL))))));
        var_30 = ((/* implicit */short) min((var_30), (((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) (unsigned short)45257)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_7)))) >> (((((/* implicit */int) (unsigned short)7306)) - (7285)))))) ? (((/* implicit */int) min((arr_27 [i_6 - 1]), (arr_27 [i_6 - 1])))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (arr_43 [i_6 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_6])))))) ? (((1772047207) + (((/* implicit */int) (short)-4878)))) : ((-(((/* implicit */int) arr_14 [i_6] [i_6] [i_6])))))))))));
    }
}
