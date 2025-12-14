/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148647
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148647 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148647
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned char) var_16)))));
        arr_5 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [(short)14])) ? (var_7) : (((/* implicit */int) var_13))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (((unsigned int) var_11))));
        /* LoopSeq 3 */
        for (unsigned short i_1 = 1; i_1 < 13; i_1 += 3) /* same iter space */
        {
            arr_8 [i_0] [i_0] [i_0] &= ((/* implicit */signed char) (~(((/* implicit */int) (unsigned char)8))));
            arr_9 [i_1] = var_15;
        }
        for (unsigned short i_2 = 1; i_2 < 13; i_2 += 3) /* same iter space */
        {
            var_17 = ((/* implicit */unsigned char) (+(var_7)));
            arr_13 [i_0] [i_2] [i_2] = ((/* implicit */_Bool) var_10);
            /* LoopNest 2 */
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                for (unsigned short i_4 = 0; i_4 < 15; i_4 += 1) 
                {
                    {
                        arr_19 [i_2 - 1] [i_0] |= ((/* implicit */short) var_13);
                        var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_6 [i_2 + 1] [i_2 + 1] [i_2 + 1])) ? (((/* implicit */int) arr_18 [i_2 + 2] [i_3] [i_3])) : (((/* implicit */int) (unsigned char)51))));
                    }
                } 
            } 
            /* LoopSeq 2 */
            for (unsigned char i_5 = 0; i_5 < 15; i_5 += 1) /* same iter space */
            {
                arr_22 [i_0] [(short)10] [i_5] |= ((/* implicit */unsigned char) ((int) (_Bool)0));
                arr_23 [i_0] [i_2] [i_0] [i_5] = ((/* implicit */unsigned short) ((((((/* implicit */int) (signed char)-51)) > (((/* implicit */int) arr_14 [i_5] [0LL] [i_0])))) ? (((/* implicit */int) ((((/* implicit */int) arr_0 [i_2])) == (((/* implicit */int) var_15))))) : (((var_13) ? (var_7) : (((/* implicit */int) var_5))))));
            }
            for (unsigned char i_6 = 0; i_6 < 15; i_6 += 1) /* same iter space */
            {
                var_19 = ((/* implicit */unsigned int) (+(((var_6) ? (((/* implicit */int) (unsigned char)152)) : (((/* implicit */int) arr_7 [i_0] [i_2 + 2] [i_6]))))));
                var_20 = ((unsigned char) arr_3 [i_2 + 1]);
                var_21 = ((/* implicit */unsigned char) (((-(((/* implicit */int) (unsigned char)244)))) <= (((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) arr_10 [i_0])) : (((/* implicit */int) var_6))))));
            }
            var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) ((unsigned long long int) arr_10 [i_0])))));
        }
        for (unsigned short i_7 = 1; i_7 < 13; i_7 += 3) /* same iter space */
        {
            var_23 = ((/* implicit */short) (~(((int) var_14))));
            arr_28 [i_7] &= var_14;
            var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)51))))) ? (((/* implicit */int) arr_17 [i_7 - 1])) : (((/* implicit */int) var_11))));
            var_25 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned int) (unsigned char)103))) || (((/* implicit */_Bool) var_3))));
            arr_29 [(_Bool)1] = ((/* implicit */long long int) arr_6 [i_0] [i_0] [i_7]);
        }
    }
    /* vectorizable */
    for (signed char i_8 = 0; i_8 < 22; i_8 += 2) 
    {
        var_26 &= ((/* implicit */short) ((((/* implicit */_Bool) -1948498770)) ? (((var_8) << (((((((/* implicit */int) arr_30 [i_8])) + (69))) - (33))))) : (((/* implicit */long long int) ((int) (_Bool)1)))));
        var_27 = ((/* implicit */unsigned int) max((var_27), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_3))))) ? (((/* implicit */int) var_13)) : (1948498769))))));
        /* LoopNest 2 */
        for (signed char i_9 = 0; i_9 < 22; i_9 += 3) 
        {
            for (unsigned char i_10 = 0; i_10 < 22; i_10 += 2) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned char i_11 = 0; i_11 < 22; i_11 += 2) /* same iter space */
                    {
                        arr_39 [i_9] [i_8] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1948498754)) && (((/* implicit */_Bool) var_14))));
                        arr_40 [i_8] [i_9] [i_10] [i_11] = ((/* implicit */long long int) arr_36 [i_8] [i_9] [i_10] [i_11]);
                        /* LoopSeq 2 */
                        for (signed char i_12 = 0; i_12 < 22; i_12 += 2) 
                        {
                            arr_44 [i_12] [i_11] [i_10] [i_8] [i_8] &= ((/* implicit */unsigned int) ((signed char) ((((/* implicit */_Bool) arr_42 [i_8])) ? (((/* implicit */int) (short)-21428)) : (((/* implicit */int) (unsigned char)218)))));
                            var_28 &= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_33 [i_10])) ? (((/* implicit */int) arr_33 [i_12])) : (((/* implicit */int) arr_31 [i_11]))));
                            var_29 = ((/* implicit */_Bool) (~(((/* implicit */int) arr_42 [i_11]))));
                            var_30 = ((/* implicit */unsigned long long int) max((var_30), (((/* implicit */unsigned long long int) arr_37 [i_8] [i_8] [i_8]))));
                        }
                        for (unsigned char i_13 = 0; i_13 < 22; i_13 += 4) 
                        {
                            var_31 = ((/* implicit */signed char) min((var_31), (var_5)));
                            var_32 = ((/* implicit */signed char) min((var_32), (((/* implicit */signed char) (+(((/* implicit */int) (unsigned char)241)))))));
                            var_33 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) var_12))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((922027197U) > (((/* implicit */unsigned int) ((/* implicit */int) var_6))))))) : (arr_34 [i_8])));
                            var_34 |= ((/* implicit */signed char) arr_37 [i_13] [i_11] [i_10]);
                        }
                    }
                    for (unsigned char i_14 = 0; i_14 < 22; i_14 += 2) /* same iter space */
                    {
                        var_35 = ((/* implicit */long long int) var_3);
                        arr_51 [i_8] [i_9] [i_9] [i_9] [i_14] |= ((/* implicit */unsigned int) var_3);
                        arr_52 [i_14] [i_14] [i_10] &= ((/* implicit */short) ((var_6) ? (((/* implicit */unsigned int) ((/* implicit */int) var_15))) : (arr_34 [i_14])));
                    }
                    var_36 = ((/* implicit */signed char) var_6);
                    var_37 = var_16;
                }
            } 
        } 
        arr_53 [i_8] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)0)) - (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (((((/* implicit */_Bool) -1948498770)) ? (10425450602809821473ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_15)))))));
        /* LoopNest 2 */
        for (unsigned long long int i_15 = 1; i_15 < 21; i_15 += 4) 
        {
            for (unsigned char i_16 = 0; i_16 < 22; i_16 += 2) 
            {
                {
                    arr_59 [i_16] [i_8] = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */unsigned int) -1948498774)) != (4153611148U)))) | (((((/* implicit */int) arr_31 [i_8])) | (((/* implicit */int) var_11))))));
                    var_38 = ((/* implicit */unsigned int) ((((/* implicit */int) ((unsigned char) var_15))) > (((var_16) / (var_1)))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned int i_17 = 0; i_17 < 23; i_17 += 2) 
    {
        var_39 |= ((/* implicit */unsigned short) arr_61 [i_17]);
        var_40 = ((/* implicit */_Bool) var_11);
    }
    var_41 = ((/* implicit */unsigned short) min((var_41), (((/* implicit */unsigned short) ((_Bool) ((((/* implicit */_Bool) var_4)) ? (((((/* implicit */_Bool) var_3)) ? (var_1) : (((/* implicit */int) var_5)))) : ((~(((/* implicit */int) (unsigned char)198))))))))));
    var_42 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-68)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-13))));
    var_43 = ((/* implicit */unsigned char) (-(((/* implicit */int) ((unsigned short) 3372940093U)))));
}
