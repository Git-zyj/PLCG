/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116945
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116945 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116945
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
    for (short i_0 = 1; i_0 < 12; i_0 += 4) 
    {
        var_20 += ((/* implicit */short) ((((((/* implicit */_Bool) (unsigned short)65517)) ? (((/* implicit */long long int) ((((/* implicit */int) arr_1 [i_0])) * (((/* implicit */int) arr_1 [i_0]))))) : (var_13))) | (((/* implicit */long long int) var_14))));
        var_21 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) (((-(109131698))) - (((var_19) + (((/* implicit */int) (unsigned short)65532))))))) == (18446744073709551615ULL)));
    }
    var_22 = ((/* implicit */unsigned int) (-(((/* implicit */int) var_15))));
    /* LoopSeq 4 */
    for (signed char i_1 = 0; i_1 < 13; i_1 += 1) 
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (long long int i_2 = 0; i_2 < 13; i_2 += 1) 
        {
            var_23 += ((/* implicit */unsigned char) ((((/* implicit */int) arr_7 [i_1])) % (((/* implicit */int) var_9))));
            var_24 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_8 [i_1] [i_1])) && (((/* implicit */_Bool) 1127488143728720614ULL)))) ? (((/* implicit */int) ((unsigned short) (unsigned short)65534))) : (((/* implicit */int) var_7))));
            var_25 = ((/* implicit */signed char) (-(((/* implicit */int) var_6))));
            arr_9 [i_1] [i_1] = ((/* implicit */unsigned int) ((unsigned char) arr_5 [i_1] [i_1] [(short)4]));
            var_26 = ((/* implicit */short) ((((/* implicit */_Bool) arr_8 [i_1] [i_1])) ? (((((/* implicit */int) var_6)) + (((/* implicit */int) (unsigned short)65514)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_18)))))));
        }
        for (long long int i_3 = 3; i_3 < 12; i_3 += 2) 
        {
            var_27 -= ((/* implicit */unsigned char) var_13);
            arr_12 [i_3] [i_3] [i_1] = (i_3 % 2 == zero) ? (((/* implicit */unsigned int) ((((((/* implicit */int) ((((/* implicit */_Bool) arr_8 [i_3] [i_1])) && (((/* implicit */_Bool) arr_11 [i_3] [7U] [i_3]))))) > (((/* implicit */int) ((unsigned short) 1082494658U))))) || (((/* implicit */_Bool) (((+(var_5))) << (((arr_11 [i_3] [i_1] [i_3 - 3]) - (415295077776649869LL))))))))) : (((/* implicit */unsigned int) ((((((/* implicit */int) ((((/* implicit */_Bool) arr_8 [i_3] [i_1])) && (((/* implicit */_Bool) arr_11 [i_3] [7U] [i_3]))))) > (((/* implicit */int) ((unsigned short) 1082494658U))))) || (((/* implicit */_Bool) (((+(var_5))) << (((((arr_11 [i_3] [i_1] [i_3 - 3]) - (415295077776649869LL))) - (3767143567068172788LL)))))))));
            var_28 = ((/* implicit */unsigned int) max((var_28), (((/* implicit */unsigned int) ((short) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-5))) + (1428236934U)))))));
        }
        for (short i_4 = 0; i_4 < 13; i_4 += 3) 
        {
            var_29 = ((/* implicit */signed char) min((var_29), (((/* implicit */signed char) (-(((/* implicit */int) arr_10 [i_1] [i_4] [i_4])))))));
            /* LoopSeq 3 */
            for (unsigned short i_5 = 1; i_5 < 11; i_5 += 1) /* same iter space */
            {
                var_30 = ((/* implicit */short) ((int) min((arr_13 [i_1] [5ULL]), (((/* implicit */long long int) var_8)))));
                arr_19 [i_5] [i_4] = var_15;
                arr_20 [i_1] [i_4] [i_5] = ((/* implicit */unsigned int) (!((((+(((/* implicit */int) arr_17 [i_5])))) > (((/* implicit */int) ((((/* implicit */_Bool) var_13)) || (((/* implicit */_Bool) var_2)))))))));
                /* LoopSeq 1 */
                for (int i_6 = 0; i_6 < 13; i_6 += 2) 
                {
                    /* LoopSeq 1 */
                    for (signed char i_7 = 0; i_7 < 13; i_7 += 3) 
                    {
                        var_31 = ((/* implicit */unsigned int) min((var_31), (((/* implicit */unsigned int) ((min((arr_23 [i_5 - 1] [i_5 - 1] [i_5 - 1] [i_5 - 1] [i_5 - 1]), (arr_23 [i_5 - 1] [i_5 + 1] [i_5 - 1] [i_7] [i_7]))) / (((((/* implicit */_Bool) var_13)) ? (arr_23 [i_5 - 1] [i_5] [i_5 - 1] [i_5 - 1] [i_7]) : (-8505628210586976742LL))))))));
                        var_32 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) min((arr_1 [i_4]), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) (unsigned short)65519))))))))));
                        var_33 = ((/* implicit */int) ((((((/* implicit */long long int) ((/* implicit */int) var_10))) % (((((/* implicit */long long int) ((/* implicit */int) var_18))) % (arr_24 [i_1]))))) + (((/* implicit */long long int) (((+(((/* implicit */int) (_Bool)1)))) % (((/* implicit */int) (unsigned short)65516)))))));
                        var_34 = ((/* implicit */unsigned char) arr_10 [i_4] [i_6] [i_7]);
                    }
                    var_35 = ((/* implicit */signed char) (~(((/* implicit */int) (unsigned short)46623))));
                    var_36 = var_8;
                }
            }
            for (unsigned short i_8 = 1; i_8 < 11; i_8 += 1) /* same iter space */
            {
                var_37 = ((/* implicit */unsigned short) (~((-(((/* implicit */int) arr_10 [i_1] [i_1] [i_8]))))));
                var_38 -= ((/* implicit */short) (!(((/* implicit */_Bool) ((18446744073709551615ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)11))))))));
                var_39 = ((/* implicit */int) ((((/* implicit */int) var_6)) != (((/* implicit */int) (((!(((/* implicit */_Bool) arr_6 [i_8] [i_4] [i_1])))) && (((/* implicit */_Bool) ((var_14) % (((/* implicit */int) (short)26554))))))))));
                var_40 *= ((/* implicit */unsigned int) var_12);
            }
            for (unsigned short i_9 = 1; i_9 < 11; i_9 += 1) /* same iter space */
            {
                var_41 = ((/* implicit */unsigned char) ((-109131716) != (((/* implicit */int) ((((((/* implicit */_Bool) (short)20894)) || (((/* implicit */_Bool) (unsigned char)160)))) && (((/* implicit */_Bool) (unsigned char)11)))))));
                var_42 = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))) > ((~(241692628043373903LL)))));
            }
            arr_30 [i_1] = ((/* implicit */unsigned long long int) ((unsigned char) ((unsigned int) var_12)));
        }
        var_43 = arr_22 [(short)4] [(short)4] [(short)4];
    }
    for (short i_10 = 0; i_10 < 15; i_10 += 3) 
    {
        var_44 = (_Bool)1;
        var_45 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (((+(arr_32 [i_10]))) / (((arr_32 [i_10]) * (2820421246U)))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) var_7))))) ? ((+(((/* implicit */int) (signed char)86)))) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_34 [i_10]))) > (var_11)))))))));
        /* LoopSeq 1 */
        for (unsigned char i_11 = 1; i_11 < 13; i_11 += 3) 
        {
            arr_38 [(signed char)9] [i_11] [i_10] = ((/* implicit */signed char) ((((/* implicit */int) var_0)) * (((/* implicit */int) var_7))));
            arr_39 [i_10] [i_10] = ((/* implicit */_Bool) ((int) arr_35 [i_11 - 1] [i_10]));
        }
    }
    /* vectorizable */
    for (long long int i_12 = 1; i_12 < 11; i_12 += 1) /* same iter space */
    {
        var_46 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(var_16)))) && (((/* implicit */_Bool) 203474321U))));
        arr_42 [i_12] [i_12] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_33 [i_12 + 1] [i_12 + 1])) >> (((/* implicit */int) arr_31 [i_12]))));
    }
    for (long long int i_13 = 1; i_13 < 11; i_13 += 1) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned char i_14 = 0; i_14 < 14; i_14 += 1) 
        {
            arr_49 [i_13] [i_13] [i_13] = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) ((unsigned char) arr_32 [i_14]))) : (((/* implicit */int) arr_47 [i_13 + 3] [i_13 + 3]))))));
            var_47 = ((/* implicit */long long int) var_7);
        }
        arr_50 [i_13] [i_13] = ((/* implicit */unsigned char) ((short) ((((((/* implicit */int) (unsigned short)19728)) & (((/* implicit */int) arr_33 [i_13] [i_13])))) << (((((/* implicit */int) max((var_15), (var_15)))) - (23195))))));
        arr_51 [i_13] [i_13] = ((/* implicit */unsigned int) ((min((((/* implicit */unsigned long long int) ((((var_19) + (2147483647))) >> (((var_8) + (622340905)))))), (arr_40 [0]))) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))));
    }
}
