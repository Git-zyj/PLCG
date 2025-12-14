/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130792
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130792 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130792
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
    var_11 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) min((min((var_1), (((/* implicit */unsigned int) var_4)))), (((/* implicit */unsigned int) (-(((/* implicit */int) var_6)))))))) & (((((/* implicit */_Bool) ((unsigned long long int) var_3))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)86))))) : (var_7)))));
    /* LoopSeq 4 */
    for (int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        var_12 = ((/* implicit */unsigned long long int) ((max((((/* implicit */int) (unsigned char)252)), (arr_2 [i_0] [i_0]))) % (((((/* implicit */_Bool) (unsigned char)252)) ? (((/* implicit */int) (short)447)) : (((/* implicit */int) (unsigned char)252))))));
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (long long int i_2 = 3; i_2 < 14; i_2 += 4) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        arr_12 [i_0] [i_0] [i_3] [i_0] [i_0] = ((/* implicit */_Bool) arr_0 [i_2 - 3]);
                        var_13 = ((/* implicit */int) max((var_13), (((/* implicit */int) ((short) min((((/* implicit */int) max((((/* implicit */unsigned char) var_2)), (arr_8 [i_3] [i_0])))), (((((/* implicit */_Bool) arr_6 [i_0])) ? (arr_2 [i_0] [i_0]) : (((/* implicit */int) arr_3 [i_0]))))))))));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (int i_4 = 2; i_4 < 11; i_4 += 4) 
        {
            for (unsigned long long int i_5 = 2; i_5 < 14; i_5 += 1) 
            {
                {
                    var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((var_3), (((/* implicit */int) arr_5 [i_4 + 2] [13U]))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)9878)) ? (32767LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */int) arr_5 [i_4 + 1] [i_4 + 4])) : (((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */int) (short)-10419)) : (((/* implicit */int) var_9))))))) : (((arr_4 [i_4 - 2] [i_4 - 1]) ? (arr_10 [i_4] [i_4] [i_4 + 3] [i_5] [i_5] [i_5 - 2]) : ((-(arr_10 [i_5] [i_5] [i_4] [i_0] [i_0] [i_0])))))));
                    var_15 = ((/* implicit */unsigned int) (!(((((/* implicit */int) (short)-10419)) == (2147483647)))));
                }
            } 
        } 
        arr_17 [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (signed char)119))));
        arr_18 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)58938))))) ? (((/* implicit */int) arr_8 [i_0] [4])) : ((((_Bool)1) ? (-1244527841) : (((/* implicit */int) (short)-11606))))))) : (((arr_14 [i_0] [i_0] [(unsigned short)1]) / (((/* implicit */unsigned long long int) arr_13 [i_0] [i_0] [i_0]))))));
    }
    for (unsigned short i_6 = 2; i_6 < 20; i_6 += 4) 
    {
        arr_22 [i_6 + 1] [i_6] = ((/* implicit */long long int) min(((+(arr_21 [i_6 + 3]))), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_19 [i_6])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_20 [i_6] [i_6])))) * (((/* implicit */int) arr_20 [i_6 + 2] [i_6 + 1])))))));
        arr_23 [i_6] = ((/* implicit */long long int) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_21 [i_6])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_6 - 2] [i_6]))) : (arr_21 [(unsigned char)16])))) ? (arr_21 [i_6 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((-1244527841) == (((/* implicit */int) var_2)))))))), (((/* implicit */unsigned long long int) min((var_5), (arr_20 [i_6 + 3] [i_6 - 2]))))));
    }
    for (unsigned long long int i_7 = 0; i_7 < 22; i_7 += 4) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned int i_8 = 0; i_8 < 22; i_8 += 4) 
        {
            for (signed char i_9 = 1; i_9 < 21; i_9 += 3) 
            {
                {
                    var_16 -= ((/* implicit */unsigned short) min((((((((/* implicit */int) var_2)) != (-1927833390))) ? (739406418625562667ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (((_Bool)0) || (((/* implicit */_Bool) arr_24 [i_7])))))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_25 [i_9 + 1] [i_9 + 1])) ? (((/* implicit */int) arr_26 [i_9 + 1])) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (short)-10419)) : (((/* implicit */int) (_Bool)1)))))))));
                    arr_31 [3ULL] [i_8] [i_8] [(unsigned short)20] = ((/* implicit */short) (+((-((~(((/* implicit */int) var_2))))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned long long int i_10 = 0; i_10 < 22; i_10 += 4) 
                    {
                        arr_34 [i_7] = ((/* implicit */long long int) ((((((/* implicit */int) (signed char)-119)) ^ (((/* implicit */int) (short)-8834)))) >> ((((~(var_1))) - (1425975737U)))));
                        arr_35 [i_10] [i_8] = ((/* implicit */unsigned short) ((int) arr_21 [i_9 - 1]));
                        var_17 = ((/* implicit */int) var_7);
                        arr_36 [15LL] [(unsigned char)8] [(signed char)4] [15LL] = ((/* implicit */unsigned int) var_6);
                        arr_37 [i_7] [(signed char)7] [0] [(_Bool)1] |= ((/* implicit */long long int) (~(((/* implicit */int) arr_28 [i_10] [i_9 - 1] [i_7]))));
                    }
                }
            } 
        } 
        /* LoopSeq 1 */
        for (unsigned char i_11 = 1; i_11 < 20; i_11 += 3) 
        {
            var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((/* implicit */int) var_8)) < (((/* implicit */int) arr_30 [i_7] [i_11 + 2] [i_11 + 2])))) ? (((((/* implicit */_Bool) arr_39 [i_7] [i_7])) ? (((/* implicit */int) arr_19 [18ULL])) : (((/* implicit */int) (unsigned char)26)))) : ((+(((/* implicit */int) arr_27 [7LL] [7LL]))))))) ? (((((/* implicit */_Bool) ((unsigned long long int) 3989955875739506816ULL))) ? (min((6567588052999874465LL), (((/* implicit */long long int) var_0)))) : (((/* implicit */long long int) (-(((/* implicit */int) arr_38 [6U] [i_11 - 1]))))))) : (((/* implicit */long long int) (+((-(((/* implicit */int) arr_33 [14] [i_7] [14] [i_11])))))))));
            var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned char) arr_26 [i_7])), ((unsigned char)82)))) ? (((unsigned long long int) (short)10418)) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)16924))))))));
            var_20 -= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((long long int) 3989955875739506816ULL))) % (arr_39 [i_11 - 1] [i_11 + 1])));
        }
    }
    for (unsigned long long int i_12 = 0; i_12 < 22; i_12 += 4) /* same iter space */
    {
        var_21 = ((/* implicit */_Bool) var_9);
        arr_42 [(unsigned short)7] [i_12] = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) arr_21 [i_12])))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-58)) ? (2181956379U) : (((/* implicit */unsigned int) 1244527834)))))));
    }
    var_22 = ((/* implicit */unsigned short) (-(((unsigned int) ((6567588052999874465LL) - (((/* implicit */long long int) ((/* implicit */int) var_4))))))));
    var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) var_8))));
    var_24 = ((/* implicit */long long int) ((((/* implicit */_Bool) 8238661385674724879ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (min((3989955875739506823ULL), (14456788197970044793ULL)))));
}
