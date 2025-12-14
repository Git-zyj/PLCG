/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147675
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147675 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147675
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
    var_17 &= ((/* implicit */signed char) ((var_4) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_16)))));
    var_18 &= ((/* implicit */unsigned int) var_2);
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */_Bool) (signed char)76);
        /* LoopSeq 4 */
        for (unsigned char i_1 = 1; i_1 < 12; i_1 += 3) 
        {
            arr_5 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) var_9);
            arr_6 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((var_14) << (((((((/* implicit */int) (signed char)-77)) + (103))) - (22)))))) ? (((unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_16)) : (var_1)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))));
            /* LoopNest 2 */
            for (unsigned long long int i_2 = 0; i_2 < 14; i_2 += 3) 
            {
                for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                {
                    {
                        var_19 *= ((/* implicit */unsigned char) var_6);
                        var_20 -= ((/* implicit */unsigned long long int) (signed char)-76);
                        arr_11 [i_0] [i_0] [i_1] [i_2] [i_0] [i_3] = ((/* implicit */_Bool) ((signed char) (signed char)76));
                        var_21 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((((/* implicit */int) (_Bool)0)) << (((/* implicit */int) (_Bool)1)))) % (((((/* implicit */_Bool) 197504998U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))))))));
                    }
                } 
            } 
        }
        for (unsigned int i_4 = 0; i_4 < 14; i_4 += 3) 
        {
            arr_14 [i_0] = ((/* implicit */long long int) var_3);
            arr_15 [i_0] [i_0] = ((/* implicit */unsigned long long int) (short)-31606);
            arr_16 [i_0] [4LL] [(signed char)8] &= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_0]))));
            arr_17 [0ULL] [0ULL] [i_0] = ((/* implicit */signed char) arr_4 [i_4] [i_4] [i_4]);
        }
        for (signed char i_5 = 0; i_5 < 14; i_5 += 3) 
        {
            arr_20 [i_0] = arr_19 [2] [2] [i_5];
            arr_21 [i_0] [i_5] [i_5] = (signed char)-64;
            var_22 = ((/* implicit */signed char) ((unsigned int) var_8));
            arr_22 [(_Bool)1] [i_0] [i_0] = ((/* implicit */short) (((+(((/* implicit */int) (signed char)76)))) * (((/* implicit */int) var_0))));
        }
        for (unsigned long long int i_6 = 4; i_6 < 13; i_6 += 1) 
        {
            var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) ((((_Bool) (signed char)-76)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_11)))))));
            /* LoopSeq 1 */
            for (unsigned int i_7 = 0; i_7 < 14; i_7 += 4) 
            {
                /* LoopSeq 1 */
                for (unsigned char i_8 = 1; i_8 < 12; i_8 += 4) 
                {
                    var_24 = ((/* implicit */signed char) var_4);
                    var_25 = ((/* implicit */_Bool) ((long long int) (_Bool)1));
                }
                arr_31 [i_0] [i_7] = ((/* implicit */_Bool) ((((arr_29 [(_Bool)1] [i_0] [(short)9] [i_7]) % (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)12351))))) * (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_6 - 2] [i_7])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (_Bool)1)))))));
            }
            /* LoopSeq 2 */
            for (unsigned long long int i_9 = 2; i_9 < 12; i_9 += 3) 
            {
                arr_35 [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */int) var_9)) ^ (var_1)));
                arr_36 [i_0] [i_0] [i_6 - 3] [2U] = ((/* implicit */short) ((((((/* implicit */int) ((signed char) ((long long int) var_6)))) + (2147483647))) << (((((/* implicit */int) ((((/* implicit */_Bool) 950776927326130589LL)) || (((/* implicit */_Bool) var_15))))) - (1)))));
                var_26 &= ((/* implicit */signed char) (~(((/* implicit */int) var_10))));
                var_27 = ((/* implicit */unsigned int) max((var_27), (((/* implicit */unsigned int) (signed char)72))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (signed char i_10 = 0; i_10 < 14; i_10 += 3) 
                {
                    var_28 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned long long int) (signed char)96))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)42)) ? (var_14) : (((/* implicit */int) (_Bool)1))))) : (((((/* implicit */_Bool) var_14)) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-4458)))))));
                    var_29 = ((/* implicit */signed char) min((var_29), (((/* implicit */signed char) ((((((/* implicit */_Bool) var_7)) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [8LL] [i_9] [8LL]))))) ^ (var_8))))));
                }
            }
            /* vectorizable */
            for (unsigned short i_11 = 0; i_11 < 14; i_11 += 2) 
            {
                var_30 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 142989288169013248ULL)) || (((/* implicit */_Bool) (+(130210320U))))));
                /* LoopSeq 1 */
                for (unsigned long long int i_12 = 0; i_12 < 14; i_12 += 4) 
                {
                    var_31 *= ((/* implicit */short) (-(((/* implicit */int) (_Bool)1))));
                    arr_43 [i_0] [(unsigned short)5] [i_0] [i_12] = ((/* implicit */signed char) ((((((/* implicit */long long int) ((/* implicit */int) arr_13 [i_6] [i_11]))) ^ (var_15))) ^ (((/* implicit */long long int) ((/* implicit */int) var_9)))));
                    var_32 = ((/* implicit */short) max((var_32), (((/* implicit */short) (+(((/* implicit */int) var_5)))))));
                    var_33 *= (~(arr_32 [i_0] [i_0] [i_0] [i_0]));
                    var_34 = ((/* implicit */unsigned int) max((var_34), (((/* implicit */unsigned int) arr_13 [i_6] [i_6]))));
                }
                arr_44 [i_0] [(unsigned short)5] [i_0] [i_0] = ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) / (1050480745U)))) || (((/* implicit */_Bool) (signed char)-58)));
                var_35 = ((/* implicit */_Bool) ((var_3) ^ (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) % (779019373U))))));
                /* LoopSeq 1 */
                for (signed char i_13 = 0; i_13 < 14; i_13 += 3) 
                {
                    arr_48 [i_0] [i_0] = ((/* implicit */long long int) ((_Bool) (unsigned char)146));
                    arr_49 [i_0] [i_6] [i_0] = ((/* implicit */unsigned long long int) (short)7236);
                    arr_50 [i_0] [i_6 + 1] [i_6] [i_11] [(unsigned char)11] [i_13] = ((/* implicit */unsigned char) 29360128U);
                }
            }
            var_36 = ((/* implicit */unsigned short) max((var_36), (((/* implicit */unsigned short) var_5))));
        }
    }
    /* vectorizable */
    for (unsigned long long int i_14 = 1; i_14 < 19; i_14 += 3) 
    {
        var_37 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 16383U)) ? (((/* implicit */int) (short)-4449)) : (((((/* implicit */_Bool) (short)-4458)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (short)-4458))))));
        /* LoopSeq 2 */
        for (signed char i_15 = 1; i_15 < 20; i_15 += 1) /* same iter space */
        {
            var_38 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((short) 4ULL))) || (((/* implicit */_Bool) 12291992519560393358ULL))));
            var_39 -= ((/* implicit */long long int) ((unsigned short) 0ULL));
        }
        for (signed char i_16 = 1; i_16 < 20; i_16 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (unsigned char i_17 = 0; i_17 < 22; i_17 += 4) 
            {
                for (unsigned int i_18 = 0; i_18 < 22; i_18 += 1) 
                {
                    {
                        var_40 -= ((/* implicit */unsigned long long int) var_11);
                        arr_63 [i_14] [i_14 - 1] [i_14 - 1] [i_14 - 1] = ((/* implicit */unsigned char) ((signed char) var_12));
                        var_41 = ((/* implicit */_Bool) ((int) var_13));
                    }
                } 
            } 
            arr_64 [i_14] [i_14] [i_16 + 2] &= ((/* implicit */unsigned long long int) var_1);
            var_42 = ((/* implicit */unsigned short) min((var_42), (((/* implicit */unsigned short) (+(((/* implicit */int) (short)4451)))))));
            var_43 = ((/* implicit */unsigned int) ((((/* implicit */int) (short)4449)) ^ (((/* implicit */int) var_6))));
            var_44 = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) var_7))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_60 [i_14] [i_14] [i_14 + 3] [i_16]))) : (((var_4) >> (((/* implicit */int) (_Bool)1))))));
        }
        arr_65 [2ULL] = var_5;
    }
}
