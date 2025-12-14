/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143109
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143109 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143109
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
    var_11 = ((/* implicit */unsigned int) min((((/* implicit */long long int) 1757837720)), (7579477485621226210LL)));
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        var_12 = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((int) (+(var_9))))), ((+((~(var_10)))))));
        var_13 = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)44)) * (((/* implicit */int) (short)-243))));
    }
    for (signed char i_1 = 0; i_1 < 12; i_1 += 1) 
    {
        /* LoopNest 2 */
        for (long long int i_2 = 0; i_2 < 12; i_2 += 1) 
        {
            for (long long int i_3 = 0; i_3 < 12; i_3 += 1) 
            {
                {
                    var_14 = ((/* implicit */short) min(((-(var_9))), (((/* implicit */unsigned int) ((short) 887266984U)))));
                    arr_10 [i_3] [i_2] [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(min((11U), (arr_4 [i_1])))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? ((+(((/* implicit */int) (unsigned char)211)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))))) : (arr_1 [i_1])));
                    var_15 = min((((/* implicit */unsigned int) (+(((/* implicit */int) (short)15))))), ((+(var_1))));
                }
            } 
        } 
        arr_11 [i_1] = ((/* implicit */long long int) var_8);
        /* LoopSeq 1 */
        for (unsigned int i_4 = 0; i_4 < 12; i_4 += 1) 
        {
            var_16 = ((/* implicit */unsigned char) arr_4 [(short)4]);
            var_17 = ((unsigned int) -6413415586794622948LL);
        }
        var_18 ^= ((/* implicit */unsigned long long int) (-(min((arr_7 [i_1] [i_1] [i_1] [i_1]), (4294967295U)))));
        var_19 ^= ((/* implicit */unsigned short) ((unsigned long long int) (!(((/* implicit */_Bool) min((var_3), (((/* implicit */long long int) arr_7 [i_1] [(unsigned short)5] [i_1] [i_1]))))))));
    }
    for (long long int i_5 = 3; i_5 < 22; i_5 += 1) 
    {
        var_20 = ((/* implicit */unsigned int) var_3);
        var_21 ^= ((/* implicit */unsigned short) (-((-(((/* implicit */int) min((((/* implicit */short) (unsigned char)207)), (var_8))))))));
        arr_17 [i_5 + 1] [i_5] = ((/* implicit */unsigned char) -6413415586794622948LL);
        var_22 = ((/* implicit */unsigned long long int) (~(min((((/* implicit */long long int) (!(((/* implicit */_Bool) (short)32764))))), ((-(arr_16 [i_5] [7U])))))));
        /* LoopSeq 4 */
        for (short i_6 = 2; i_6 < 23; i_6 += 2) 
        {
            var_23 = ((/* implicit */unsigned short) arr_15 [i_5]);
            arr_21 [i_5 + 1] [(signed char)9] [i_5] = ((/* implicit */short) (((~((-(((/* implicit */int) var_8)))))) <= (min(((-(((/* implicit */int) arr_19 [i_5] [8] [i_5])))), ((+(((/* implicit */int) var_4))))))));
        }
        for (unsigned int i_7 = 3; i_7 < 21; i_7 += 1) 
        {
            var_24 += ((/* implicit */unsigned int) (-(((/* implicit */int) arr_22 [12U]))));
            var_25 = ((/* implicit */signed char) max((var_25), (((/* implicit */signed char) min((min((((/* implicit */unsigned int) var_8)), (((((/* implicit */_Bool) arr_22 [(unsigned short)4])) ? (var_10) : (3719769356U))))), (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)42415))))))))));
            var_26 = ((/* implicit */short) min((var_3), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_23 [i_5])) ? ((+(var_9))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) 8476925919392958093LL)))))))));
            arr_24 [i_5] = ((/* implicit */signed char) (short)0);
            var_27 = ((/* implicit */int) min((var_27), (((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))));
        }
        for (int i_8 = 2; i_8 < 23; i_8 += 1) /* same iter space */
        {
            var_28 = ((/* implicit */unsigned short) min((var_28), (((/* implicit */unsigned short) min((var_3), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((-1) - (((/* implicit */int) arr_15 [(signed char)10])))))))))))));
            var_29 = ((/* implicit */signed char) (-(min((var_1), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_5)))))))));
            arr_27 [i_5] [i_5] [i_5] = ((/* implicit */unsigned short) (+(((/* implicit */int) (short)32764))));
        }
        /* vectorizable */
        for (int i_9 = 2; i_9 < 23; i_9 += 1) /* same iter space */
        {
            arr_30 [i_5] [i_9] [i_9 - 1] = ((/* implicit */int) (!((!(((/* implicit */_Bool) (short)16))))));
            var_30 = ((/* implicit */int) var_9);
            var_31 = ((/* implicit */unsigned int) arr_16 [i_5] [i_9 + 1]);
            var_32 = ((/* implicit */int) (((~(3745780244U))) - (((/* implicit */unsigned int) (~(arr_26 [i_5] [i_5]))))));
        }
    }
}
