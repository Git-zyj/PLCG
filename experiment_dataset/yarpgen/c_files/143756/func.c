/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143756
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143756 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143756
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
    var_11 = ((/* implicit */long long int) var_9);
    /* LoopSeq 4 */
    for (int i_0 = 0; i_0 < 23; i_0 += 1) /* same iter space */
    {
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned short) (+(((((/* implicit */int) arr_0 [i_0])) % (((/* implicit */int) (short)-15310))))));
        var_12 = (short)-15314;
        var_13 = ((/* implicit */long long int) (((!(((/* implicit */_Bool) arr_1 [i_0] [i_0])))) ? (((/* implicit */int) ((unsigned char) (-(arr_1 [i_0] [i_0]))))) : (((/* implicit */int) ((short) arr_1 [i_0] [i_0])))));
    }
    for (int i_1 = 0; i_1 < 23; i_1 += 1) /* same iter space */
    {
        arr_7 [(unsigned short)4] &= ((/* implicit */unsigned long long int) -930884683);
        arr_8 [i_1] = ((/* implicit */short) (+(max((var_1), (((/* implicit */int) arr_2 [i_1] [i_1]))))));
    }
    for (int i_2 = 0; i_2 < 23; i_2 += 1) /* same iter space */
    {
        var_14 = ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */_Bool) max(((short)15314), (((/* implicit */short) arr_2 [i_2] [i_2]))))) || (((/* implicit */_Bool) ((unsigned short) var_9)))))) ^ (max((var_8), ((+(var_1)))))));
        arr_12 [i_2] = ((/* implicit */_Bool) ((((((/* implicit */int) ((signed char) var_3))) + (2147483647))) >> (((max((((/* implicit */unsigned int) var_6)), (arr_11 [i_2]))) - (3953155027U)))));
        var_15 *= ((/* implicit */signed char) arr_9 [i_2] [i_2]);
    }
    for (unsigned char i_3 = 0; i_3 < 22; i_3 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned int i_4 = 3; i_4 < 21; i_4 += 4) 
        {
            for (signed char i_5 = 4; i_5 < 20; i_5 += 3) 
            {
                {
                    var_16 = ((/* implicit */int) ((((/* implicit */int) var_9)) >= (((/* implicit */int) ((var_10) > (arr_16 [i_5 + 2] [i_3]))))));
                    arr_20 [i_3] [i_3] = ((/* implicit */short) (+(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)30349)) ? (((/* implicit */int) arr_13 [i_3])) : (((/* implicit */int) (unsigned short)64912))))))))));
                }
            } 
        } 
        arr_21 [i_3] [i_3] = ((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_3])))))));
    }
    /* LoopSeq 4 */
    for (signed char i_6 = 0; i_6 < 11; i_6 += 1) 
    {
        var_17 = ((/* implicit */int) ((max((((/* implicit */int) ((short) arr_19 [i_6] [i_6] [i_6] [i_6]))), (((((/* implicit */int) arr_22 [i_6])) - (((/* implicit */int) arr_3 [i_6] [i_6])))))) < (((((/* implicit */_Bool) min((((/* implicit */int) (unsigned char)79)), (arr_1 [i_6] [i_6])))) ? (((/* implicit */int) arr_2 [i_6] [i_6])) : (((/* implicit */int) ((((/* implicit */int) (short)-15310)) != (((/* implicit */int) var_9)))))))));
        var_18 = ((/* implicit */unsigned char) max((((max((-3514169634344968179LL), (((/* implicit */long long int) arr_15 [i_6] [i_6])))) + (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */long long int) (~(((/* implicit */int) arr_18 [i_6])))))));
    }
    for (signed char i_7 = 0; i_7 < 14; i_7 += 3) 
    {
        /* LoopNest 3 */
        for (unsigned int i_8 = 2; i_8 < 12; i_8 += 1) 
        {
            for (unsigned short i_9 = 0; i_9 < 14; i_9 += 4) 
            {
                for (unsigned int i_10 = 2; i_10 < 12; i_10 += 2) 
                {
                    {
                        var_19 = ((/* implicit */signed char) ((((((/* implicit */int) arr_26 [i_7])) >> (((((/* implicit */int) arr_26 [i_7])) - (42))))) | (var_10)));
                        var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) (-(((/* implicit */int) min((arr_2 [i_8 - 1] [i_10 + 1]), (arr_2 [i_8 - 1] [i_10 - 1])))))))));
                        var_21 &= ((((/* implicit */long long int) ((((/* implicit */int) ((arr_17 [i_7] [i_8] [i_9] [i_10]) > (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_7])))))) / (((/* implicit */int) arr_13 [i_8 - 1]))))) % (arr_28 [i_8]));
                    }
                } 
            } 
        } 
        var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) max((((/* implicit */int) max((((((/* implicit */int) var_4)) <= (var_10))), (((((/* implicit */_Bool) arr_0 [i_7])) || (((/* implicit */_Bool) -1574333764))))))), (((((/* implicit */_Bool) arr_1 [i_7] [i_7])) ? (arr_1 [i_7] [i_7]) : (arr_1 [i_7] [i_7]))))))));
    }
    for (long long int i_11 = 2; i_11 < 22; i_11 += 2) 
    {
        arr_37 [i_11] = ((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */_Bool) arr_35 [i_11 + 1])) ? (arr_35 [i_11 + 2]) : (arr_35 [i_11 + 1]))));
        arr_38 [i_11] = ((/* implicit */_Bool) (~(max((((/* implicit */int) arr_36 [i_11] [i_11 - 2])), (-1574333761)))));
    }
    for (long long int i_12 = 0; i_12 < 18; i_12 += 3) 
    {
        arr_41 [i_12] = ((/* implicit */signed char) ((((((/* implicit */int) ((_Bool) arr_17 [i_12] [i_12] [i_12] [i_12]))) > (((/* implicit */int) (!(((/* implicit */_Bool) arr_40 [i_12]))))))) ? (((/* implicit */int) arr_9 [i_12] [i_12])) : (((((/* implicit */int) max((arr_36 [i_12] [i_12]), (((/* implicit */short) arr_39 [i_12]))))) / (((/* implicit */int) arr_39 [i_12]))))));
        arr_42 [i_12] = ((/* implicit */int) arr_9 [i_12] [i_12]);
        var_23 |= ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */int) ((((/* implicit */unsigned int) var_10)) != (arr_17 [i_12] [i_12] [i_12] [i_12])))) > (((arr_15 [i_12] [(unsigned short)2]) % (((/* implicit */int) (unsigned short)12071))))))) & (((/* implicit */int) arr_6 [i_12]))));
        arr_43 [i_12] [i_12] = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_0 [i_12])) ? (1069727428) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_17 [i_12] [i_12] [i_12] [i_12]))))))) <= (((((/* implicit */int) min((((/* implicit */unsigned short) (signed char)82)), (arr_9 [i_12] [i_12])))) >> (((/* implicit */int) (!((_Bool)1))))))));
    }
    var_24 = ((/* implicit */unsigned short) (+(((var_8) ^ (((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))))));
    var_25 = (!(((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) var_5)) != (((/* implicit */int) var_5))))) << (((var_8) + (31472351)))))));
}
