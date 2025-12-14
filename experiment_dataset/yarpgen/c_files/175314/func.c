/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175314
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175314 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175314
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
    var_14 = ((((unsigned long long int) var_11)) > (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_3)))));
    var_15 = ((/* implicit */int) ((var_1) ? (((/* implicit */unsigned long long int) var_11)) : (max((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_9))))), (var_7)))));
    var_16 = ((/* implicit */signed char) ((unsigned long long int) var_8));
    /* LoopSeq 2 */
    for (short i_0 = 2; i_0 < 17; i_0 += 1) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned long long int) ((signed char) (_Bool)0));
        arr_5 [(signed char)15] = ((/* implicit */short) ((signed char) (signed char)68));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        /* LoopSeq 4 */
        for (unsigned int i_2 = 0; i_2 < 16; i_2 += 1) /* same iter space */
        {
            /* LoopSeq 4 */
            for (short i_3 = 0; i_3 < 16; i_3 += 1) 
            {
                var_17 = ((/* implicit */unsigned long long int) ((long long int) ((_Bool) arr_1 [i_1] [i_2])));
                var_18 = ((/* implicit */_Bool) ((unsigned long long int) max((18446744073709551614ULL), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned char)83))))))));
                var_19 = ((/* implicit */long long int) ((short) ((((/* implicit */_Bool) (signed char)-64)) || (((/* implicit */_Bool) var_3)))));
                var_20 = ((/* implicit */unsigned long long int) var_11);
            }
            for (long long int i_4 = 0; i_4 < 16; i_4 += 1) 
            {
                var_21 = ((/* implicit */short) (~(((/* implicit */int) (unsigned char)6))));
                var_22 = ((unsigned char) ((((/* implicit */_Bool) min((((/* implicit */int) arr_1 [i_1] [i_2])), (8388607)))) ? (((/* implicit */int) arr_10 [i_1])) : (((((/* implicit */int) var_4)) * (((/* implicit */int) var_8))))));
                var_23 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_10 [i_4])) : (((/* implicit */int) (signed char)-20)))), (((/* implicit */int) ((unsigned char) (unsigned char)15)))));
                var_24 = ((/* implicit */unsigned char) (signed char)5);
            }
            for (short i_5 = 0; i_5 < 16; i_5 += 1) 
            {
                /* LoopSeq 2 */
                for (unsigned long long int i_6 = 0; i_6 < 16; i_6 += 1) 
                {
                    arr_21 [i_1] [i_2] [i_5] = var_13;
                    var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 2282614374U)) ? (((/* implicit */int) (unsigned char)206)) : (((/* implicit */int) (unsigned char)212))));
                    var_26 = ((/* implicit */short) ((unsigned long long int) (-(((/* implicit */int) ((signed char) var_6))))));
                }
                for (int i_7 = 0; i_7 < 16; i_7 += 1) 
                {
                    var_27 = ((/* implicit */signed char) max((((((/* implicit */_Bool) 9223372036854775798LL)) ? (1841649207) : (((/* implicit */int) (signed char)114)))), (((/* implicit */int) var_13))));
                    var_28 = max((((signed char) ((unsigned char) var_12))), (((/* implicit */signed char) min((((((/* implicit */int) var_9)) != (((/* implicit */int) arr_18 [(signed char)13] [i_2] [(signed char)13] [(signed char)13] [i_7])))), (var_1)))));
                }
                /* LoopNest 2 */
                for (signed char i_8 = 2; i_8 < 14; i_8 += 4) 
                {
                    for (short i_9 = 0; i_9 < 16; i_9 += 4) 
                    {
                        {
                            var_29 = ((/* implicit */short) min((((((/* implicit */int) arr_25 [i_9] [i_8 - 1] [i_2] [i_1])) - (((/* implicit */int) (unsigned char)78)))), (((/* implicit */int) (unsigned char)14))));
                            var_30 = ((/* implicit */unsigned char) max((((/* implicit */short) var_2)), (max((((/* implicit */short) ((_Bool) var_11))), (arr_7 [i_8 + 2])))));
                        }
                    } 
                } 
            }
            /* vectorizable */
            for (unsigned char i_10 = 0; i_10 < 16; i_10 += 1) 
            {
                var_31 = ((/* implicit */long long int) ((unsigned long long int) var_4));
                var_32 = ((/* implicit */signed char) var_13);
                /* LoopNest 2 */
                for (short i_11 = 0; i_11 < 16; i_11 += 4) 
                {
                    for (unsigned long long int i_12 = 0; i_12 < 16; i_12 += 4) 
                    {
                        {
                            var_33 = ((/* implicit */signed char) ((unsigned long long int) (short)5028));
                            var_34 = ((/* implicit */unsigned long long int) ((_Bool) arr_27 [i_1] [i_12]));
                            var_35 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)237)) & (((/* implicit */int) (unsigned char)239))))) ? (((int) var_10)) : ((-(((/* implicit */int) (short)10533))))));
                            var_36 = ((/* implicit */short) 328825291690331368ULL);
                        }
                    } 
                } 
            }
            var_37 = ((/* implicit */short) (unsigned char)236);
        }
        for (unsigned int i_13 = 0; i_13 < 16; i_13 += 1) /* same iter space */
        {
            var_38 = ((/* implicit */unsigned long long int) var_2);
            arr_40 [i_1] [i_1] [i_1] = ((/* implicit */short) max((((long long int) arr_14 [i_13])), (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-113)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)246)))))));
        }
        /* vectorizable */
        for (unsigned int i_14 = 0; i_14 < 16; i_14 += 1) /* same iter space */
        {
            var_39 = ((short) arr_36 [i_1] [i_1] [i_1] [i_14] [i_14] [i_1]);
            var_40 = ((/* implicit */short) ((((/* implicit */int) arr_14 [i_1])) % (-35902299)));
        }
        for (unsigned int i_15 = 0; i_15 < 16; i_15 += 1) /* same iter space */
        {
            arr_47 [i_1] [i_1] = ((/* implicit */short) ((_Bool) (~(4294967295U))));
            var_41 = ((/* implicit */signed char) min((max((var_12), ((~(((/* implicit */int) var_13)))))), (((/* implicit */int) (_Bool)1))));
        }
        /* LoopSeq 2 */
        for (signed char i_16 = 1; i_16 < 13; i_16 += 4) 
        {
            var_42 = ((/* implicit */signed char) max((((/* implicit */int) max((((signed char) (unsigned char)157)), (((/* implicit */signed char) ((_Bool) var_4)))))), (((int) -2147483636))));
            var_43 = ((/* implicit */signed char) min((((/* implicit */int) var_1)), ((-(((/* implicit */int) (unsigned char)216))))));
            var_44 = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_29 [i_16 + 1] [i_16] [i_16 + 2] [i_16 + 1])) ? (((/* implicit */int) (signed char)106)) : (((/* implicit */int) arr_35 [i_1] [i_1] [i_16 - 1] [i_16] [i_16])))) != (((/* implicit */int) ((unsigned char) arr_35 [i_16] [i_1] [i_16 + 3] [i_16] [12ULL])))));
        }
        /* vectorizable */
        for (int i_17 = 0; i_17 < 16; i_17 += 4) 
        {
            var_45 = ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)119))) & (var_7));
            var_46 = var_4;
            arr_54 [i_1] = ((/* implicit */unsigned long long int) (unsigned char)210);
            var_47 = ((/* implicit */short) ((((/* implicit */_Bool) arr_22 [i_1] [i_17] [i_17])) ? (((/* implicit */unsigned long long int) var_12)) : (2431394747419825798ULL)));
        }
    }
}
