/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140620
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140620 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140620
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
    /* LoopSeq 4 */
    /* vectorizable */
    for (int i_0 = 1; i_0 < 22; i_0 += 1) /* same iter space */
    {
        var_11 = ((/* implicit */int) max((var_11), ((-(((/* implicit */int) (_Bool)1))))));
        var_12 = ((/* implicit */unsigned short) (-(-1)));
        var_13 = ((/* implicit */long long int) ((8243273631602334949ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)44563)) < (-1476496499)))))));
        var_14 = ((/* implicit */unsigned char) -1476496508);
        /* LoopSeq 3 */
        for (long long int i_1 = 3; i_1 < 22; i_1 += 2) 
        {
            var_15 |= ((/* implicit */short) (~(((/* implicit */int) (unsigned short)65535))));
            arr_6 [i_0] [i_1] [i_0] = ((/* implicit */long long int) -17);
            var_16 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */_Bool) 12406975128686369501ULL)) && (((/* implicit */_Bool) arr_5 [i_1])))))));
        }
        for (unsigned long long int i_2 = 0; i_2 < 24; i_2 += 4) 
        {
            var_17 |= ((/* implicit */unsigned long long int) ((_Bool) ((unsigned int) var_2)));
            var_18 -= ((/* implicit */signed char) (~(((/* implicit */int) (_Bool)1))));
            var_19 = ((/* implicit */signed char) ((unsigned int) ((((/* implicit */_Bool) 4083131441U)) ? (30) : (((/* implicit */int) (unsigned char)164)))));
        }
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            var_20 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_2 [0ULL] [i_3] [i_3]))));
            /* LoopSeq 1 */
            for (unsigned short i_4 = 0; i_4 < 24; i_4 += 4) 
            {
                var_21 = ((/* implicit */unsigned int) 5);
                /* LoopSeq 2 */
                for (int i_5 = 1; i_5 < 23; i_5 += 3) 
                {
                    var_22 = ((long long int) ((unsigned char) arr_10 [i_0] [i_5]));
                    arr_16 [(signed char)13] [i_5] [i_4] = ((/* implicit */signed char) ((long long int) (signed char)-1));
                }
                for (long long int i_6 = 3; i_6 < 22; i_6 += 3) 
                {
                    var_23 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1))));
                    var_24 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)73)) ? (arr_15 [i_0 - 1] [i_6 + 2] [i_0 - 1] [11LL]) : (arr_15 [i_0 + 2] [i_6 + 2] [1ULL] [i_6 + 2])));
                }
                var_25 ^= ((((/* implicit */int) arr_12 [16ULL] [i_0 + 2] [i_0 + 2] [i_0 + 2])) > (((/* implicit */int) (_Bool)1)));
                /* LoopNest 2 */
                for (long long int i_7 = 0; i_7 < 24; i_7 += 1) 
                {
                    for (int i_8 = 2; i_8 < 22; i_8 += 1) 
                    {
                        {
                            arr_24 [i_0] [i_3] [(signed char)13] [i_7] [i_7] = ((/* implicit */unsigned long long int) ((_Bool) arr_20 [i_0] [i_3] [i_4] [i_4] [i_0 - 1] [i_8]));
                            var_26 = ((/* implicit */int) ((unsigned char) (_Bool)1));
                            var_27 = ((/* implicit */int) ((((/* implicit */long long int) arr_22 [i_0 + 1] [i_0 + 2] [i_7] [i_0 + 1] [i_0 + 2] [i_0 + 1] [i_0 + 2])) - (arr_17 [i_8] [i_7] [i_4] [i_0])));
                        }
                    } 
                } 
            }
            arr_25 [i_0] [i_0] [i_3] = ((/* implicit */signed char) (+(((/* implicit */int) (signed char)1))));
        }
    }
    for (int i_9 = 1; i_9 < 22; i_9 += 1) /* same iter space */
    {
        var_28 = ((/* implicit */short) arr_3 [16LL] [i_9]);
        /* LoopNest 3 */
        for (unsigned long long int i_10 = 0; i_10 < 24; i_10 += 1) 
        {
            for (int i_11 = 1; i_11 < 21; i_11 += 1) 
            {
                for (signed char i_12 = 2; i_12 < 21; i_12 += 2) 
                {
                    {
                        var_29 = ((/* implicit */unsigned char) ((signed char) ((((/* implicit */_Bool) arr_5 [i_12])) && (((/* implicit */_Bool) ((int) (_Bool)1))))));
                        var_30 = ((/* implicit */unsigned short) min(((_Bool)1), ((!(((((/* implicit */unsigned long long int) 1812231738)) >= (4521615450283245853ULL)))))));
                        /* LoopSeq 2 */
                        for (long long int i_13 = 0; i_13 < 24; i_13 += 1) 
                        {
                            arr_37 [i_11 + 2] [i_11 + 2] = ((unsigned long long int) max((-8), (-5)));
                            arr_38 [i_9] [i_10] [i_11] [(unsigned short)23] [i_13] = ((/* implicit */short) 18446744073709551615ULL);
                        }
                        for (short i_14 = 0; i_14 < 24; i_14 += 2) 
                        {
                            arr_43 [i_9] [i_10] [i_9] [i_12] [i_12] |= ((/* implicit */int) (!(((/* implicit */_Bool) ((signed char) (!(((/* implicit */_Bool) var_10))))))));
                            arr_44 [i_14] [i_14] [i_12] [i_11 + 2] [i_9 + 2] [i_9 + 2] &= ((/* implicit */unsigned long long int) 0);
                        }
                        var_31 ^= ((/* implicit */unsigned short) max(((+(((/* implicit */int) (_Bool)1)))), (((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) arr_8 [8ULL] [i_9 + 2] [i_12 + 2]))))));
                    }
                } 
            } 
        } 
    }
    for (short i_15 = 0; i_15 < 20; i_15 += 4) /* same iter space */
    {
        arr_49 [i_15] |= ((/* implicit */long long int) (!(((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) arr_11 [i_15] [i_15] [i_15] [i_15])) : (((/* implicit */int) arr_11 [i_15] [i_15] [i_15] [16ULL])))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (short i_16 = 0; i_16 < 20; i_16 += 1) 
        {
            arr_52 [i_16] [i_16] = ((unsigned char) arr_1 [i_15]);
            arr_53 [i_16] [i_16] = 2724694970827820262ULL;
            arr_54 [i_16] = ((/* implicit */signed char) (~(15932141635379524440ULL)));
        }
        for (int i_17 = 0; i_17 < 20; i_17 += 3) 
        {
            arr_57 [i_17] = ((/* implicit */_Bool) max((max((min((arr_34 [16] [(_Bool)1] [20U] [i_15] [i_15]), (((/* implicit */unsigned long long int) var_1)))), (((/* implicit */unsigned long long int) var_4)))), (((/* implicit */unsigned long long int) ((int) arr_42 [i_15] [i_15] [i_15] [i_17] [(unsigned short)9])))));
            arr_58 [i_17] [i_17] [i_17] = ((/* implicit */unsigned int) var_7);
        }
    }
    for (short i_18 = 0; i_18 < 20; i_18 += 4) /* same iter space */
    {
        arr_61 [i_18] = (+(min((((/* implicit */unsigned int) ((((/* implicit */_Bool) 13925128623426305775ULL)) ? (((/* implicit */int) (unsigned char)211)) : (var_4)))), (max((((/* implicit */unsigned int) (_Bool)1)), (var_2))))));
        var_32 = ((/* implicit */int) ((((/* implicit */_Bool) -1LL)) && (((/* implicit */_Bool) -6609220985741921537LL))));
        /* LoopNest 3 */
        for (unsigned short i_19 = 0; i_19 < 20; i_19 += 3) 
        {
            for (signed char i_20 = 0; i_20 < 20; i_20 += 3) 
            {
                for (int i_21 = 0; i_21 < 20; i_21 += 2) 
                {
                    {
                        arr_71 [i_18] [16] [i_18] [i_19] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned short)7802))));
                        var_33 = ((/* implicit */int) arr_46 [i_18]);
                        var_34 -= ((/* implicit */unsigned int) max((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) arr_46 [(_Bool)1])))))))), (((int) arr_28 [i_19]))));
                    }
                } 
            } 
        } 
        arr_72 [12U] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (_Bool)1)), (arr_21 [i_18] [i_18] [i_18])))) ? (min((arr_21 [i_18] [i_18] [i_18]), (arr_21 [i_18] [i_18] [i_18]))) : (max((arr_21 [i_18] [i_18] [i_18]), (arr_21 [i_18] [i_18] [i_18])))));
    }
    /* LoopNest 2 */
    for (unsigned long long int i_22 = 0; i_22 < 17; i_22 += 2) 
    {
        for (short i_23 = 0; i_23 < 17; i_23 += 3) 
        {
            {
                /* LoopNest 2 */
                for (short i_24 = 0; i_24 < 17; i_24 += 3) 
                {
                    for (unsigned int i_25 = 4; i_25 < 16; i_25 += 3) 
                    {
                        {
                            var_35 = ((((((/* implicit */_Bool) arr_0 [i_25 - 3])) ? (max((((/* implicit */int) arr_11 [1] [i_23] [i_23] [i_25])), (14))) : ((~(((/* implicit */int) (short)6205)))))) / (((/* implicit */int) arr_65 [i_25 - 1])));
                            arr_82 [i_22] [i_24] [i_23] [6U] [i_24] [i_25] = ((/* implicit */signed char) 4294967275U);
                        }
                    } 
                } 
                var_36 &= ((/* implicit */signed char) (short)255);
                var_37 = ((/* implicit */signed char) max((var_37), (((signed char) max((arr_73 [i_23]), (arr_73 [i_22]))))));
            }
        } 
    } 
    var_38 = ((/* implicit */signed char) max((((((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (_Bool)1))))) * ((+(var_2))))), (((/* implicit */unsigned int) var_10))));
    var_39 = ((/* implicit */unsigned short) max(((_Bool)1), ((_Bool)1)));
    var_40 |= ((/* implicit */_Bool) (unsigned char)244);
}
