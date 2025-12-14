/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160638
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160638 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160638
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
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) (+(1039875435))))));
        /* LoopSeq 1 */
        for (long long int i_1 = 1; i_1 < 22; i_1 += 2) 
        {
            /* LoopSeq 1 */
            for (short i_2 = 0; i_2 < 24; i_2 += 4) 
            {
                arr_9 [i_0] [i_2] = ((/* implicit */long long int) (signed char)40);
                /* LoopSeq 3 */
                for (short i_3 = 0; i_3 < 24; i_3 += 3) 
                {
                    var_19 = ((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) (signed char)126)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (var_5))));
                    var_20 *= ((/* implicit */unsigned long long int) ((unsigned int) arr_3 [i_0] [i_2] [i_3]));
                    var_21 = ((/* implicit */int) 4610560118520545280LL);
                }
                for (int i_4 = 2; i_4 < 23; i_4 += 3) 
                {
                    var_22 = ((/* implicit */unsigned char) ((3114588081U) | (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)154)))));
                    var_23 = ((/* implicit */unsigned long long int) ((unsigned short) arr_0 [i_1 - 1]));
                    var_24 = ((/* implicit */unsigned long long int) var_16);
                    var_25 = ((/* implicit */unsigned char) (+(arr_2 [i_1] [i_1 + 1] [i_1])));
                }
                for (unsigned long long int i_5 = 3; i_5 < 23; i_5 += 2) 
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_6 = 0; i_6 < 24; i_6 += 1) 
                    {
                        var_26 -= ((/* implicit */short) var_6);
                        var_27 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((int) arr_10 [5ULL] [i_2]))) ? (var_16) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) >= (17599826116538711890ULL)))))));
                    }
                    var_28 = ((/* implicit */unsigned short) (+(((/* implicit */int) (_Bool)1))));
                    arr_18 [i_0] [i_1] [i_0] [i_5] [i_5] |= ((/* implicit */unsigned long long int) arr_12 [i_0] [i_1 + 2] [i_0] [i_1 + 2]);
                }
            }
            /* LoopSeq 1 */
            for (signed char i_7 = 0; i_7 < 24; i_7 += 2) 
            {
                var_29 = ((/* implicit */unsigned short) max((var_29), (((/* implicit */unsigned short) arr_2 [i_0] [i_0] [i_1 - 1]))));
                /* LoopSeq 1 */
                for (short i_8 = 0; i_8 < 24; i_8 += 3) 
                {
                    var_30 = ((/* implicit */int) ((((((/* implicit */_Bool) (short)-512)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_1]))) : (var_8))) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_1 + 1] [i_1 + 2] [i_1 + 2] [i_1 + 1])))));
                    var_31 = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_4 [i_8])) : (((/* implicit */int) (short)16316))))));
                    var_32 = ((/* implicit */short) ((((/* implicit */_Bool) var_4)) ? (((((/* implicit */_Bool) (unsigned char)214)) ? (4760607509382305583ULL) : (((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)116)))))));
                    /* LoopSeq 2 */
                    for (long long int i_9 = 0; i_9 < 24; i_9 += 1) 
                    {
                        var_33 = ((/* implicit */short) (~(14464091153264922655ULL)));
                        var_34 &= ((unsigned char) (unsigned short)19977);
                        var_35 = ((/* implicit */unsigned int) ((arr_2 [i_0] [i_7] [i_0]) >> (((((/* implicit */int) (short)3584)) - (3580)))));
                    }
                    for (unsigned char i_10 = 1; i_10 < 23; i_10 += 4) 
                    {
                        var_36 = ((/* implicit */unsigned short) min((var_36), (((/* implicit */unsigned short) ((signed char) (unsigned short)40628)))));
                        var_37 = ((/* implicit */int) ((long long int) var_12));
                        var_38 = ((/* implicit */_Bool) (+(((/* implicit */int) var_14))));
                        var_39 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (arr_25 [(unsigned short)20] [(unsigned short)22]) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0])))))) ? (((((/* implicit */_Bool) arr_13 [i_0] [i_1] [i_7] [i_0] [(short)3])) ? (((/* implicit */int) (short)(-32767 - 1))) : (-1162767642))) : (((/* implicit */int) arr_28 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))));
                        arr_30 [i_0] [i_0] [i_7] [i_8] [i_8] [i_8] = ((/* implicit */unsigned int) ((short) 2320823104U));
                    }
                }
                /* LoopSeq 3 */
                for (long long int i_11 = 0; i_11 < 24; i_11 += 1) /* same iter space */
                {
                    arr_34 [i_0] [i_1] [i_7] [i_7] [i_7] = ((/* implicit */signed char) (~(-30202986)));
                    var_40 = ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)28))))) ? ((~(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) ((unsigned short) 0ULL))));
                    arr_35 [i_0] [i_1] [i_1] [(unsigned short)12] [i_11] = ((/* implicit */short) (-((~(36028796985409536ULL)))));
                }
                for (long long int i_12 = 0; i_12 < 24; i_12 += 1) /* same iter space */
                {
                    var_41 = ((((/* implicit */_Bool) arr_6 [i_12] [i_1 + 2] [i_0])) ? (((/* implicit */int) (unsigned short)24316)) : (((/* implicit */int) arr_6 [i_7] [i_1 + 2] [i_1])));
                    arr_39 [i_0] [i_1] [i_7] [i_7] = ((/* implicit */unsigned long long int) (~(arr_22 [i_0] [i_1] [i_7] [i_12])));
                }
                for (long long int i_13 = 0; i_13 < 24; i_13 += 1) /* same iter space */
                {
                    /* LoopSeq 3 */
                    for (signed char i_14 = 0; i_14 < 24; i_14 += 2) /* same iter space */
                    {
                        var_42 = (~(((/* implicit */int) (short)32757)));
                        var_43 = (~(((/* implicit */int) var_14)));
                    }
                    for (signed char i_15 = 0; i_15 < 24; i_15 += 2) /* same iter space */
                    {
                        arr_49 [i_13] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_5 [i_0] [i_1 + 2] [i_7])) ? (((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) arr_1 [i_7] [i_13])))) : (((/* implicit */int) arr_47 [i_0] [i_1 + 2] [i_7] [i_13] [i_13] [i_0]))));
                        var_44 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_21 [i_1] [i_7] [i_13] [i_15])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_46 [(short)13] [i_1 + 2] [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_13]))) : (1637853155U)))) ? (-1LL) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_15])))));
                        var_45 = ((/* implicit */unsigned char) max((var_45), (((/* implicit */unsigned char) (+(((((/* implicit */_Bool) arr_40 [i_0] [i_15] [i_7] [i_13])) ? (arr_21 [i_0] [i_7] [i_0] [i_15]) : (((/* implicit */unsigned long long int) arr_26 [(unsigned short)10] [(unsigned short)10] [i_7] [i_13] [i_15])))))))));
                    }
                    for (signed char i_16 = 0; i_16 < 24; i_16 += 2) /* same iter space */
                    {
                        var_46 = ((/* implicit */_Bool) max((var_46), (((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1)))))));
                        var_47 = ((/* implicit */signed char) min((var_47), (((/* implicit */signed char) ((((/* implicit */_Bool) 1906454879U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65528))) : (4U))))));
                        var_48 = ((/* implicit */short) arr_16 [i_0] [(_Bool)1] [i_0]);
                        var_49 = ((/* implicit */short) ((unsigned short) 4294967295U));
                    }
                    var_50 &= ((/* implicit */short) (~(arr_5 [i_0] [i_1] [i_7])));
                }
            }
            var_51 = ((/* implicit */unsigned short) (~(arr_20 [i_0] [i_0])));
        }
        /* LoopNest 2 */
        for (long long int i_17 = 2; i_17 < 23; i_17 += 3) 
        {
            for (_Bool i_18 = 0; i_18 < 0; i_18 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (long long int i_19 = 1; i_19 < 21; i_19 += 3) 
                    {
                        var_52 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_8 [i_19 + 1])) ? (((/* implicit */int) arr_28 [i_19 + 2] [i_17 - 1] [(_Bool)1] [(short)4] [i_17] [9LL] [i_17 - 1])) : (((var_17) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-3944))))));
                        arr_62 [i_0] [i_17 + 1] [i_18] [i_19 + 1] [i_17 + 1] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) 331506669U)) + (16439943810487225854ULL)));
                        arr_63 [i_0] [i_0] [i_18] [i_19] [(unsigned char)21] [i_19] = ((/* implicit */unsigned int) arr_48 [i_0] [i_0] [i_0] [10ULL] [i_0]);
                    }
                    for (unsigned short i_20 = 2; i_20 < 22; i_20 += 1) 
                    {
                        var_53 = ((/* implicit */short) (~(arr_61 [i_0] [i_17 + 1] [(short)15] [i_20])));
                        arr_68 [i_0] [i_0] [(short)9] [i_18] = ((/* implicit */long long int) var_0);
                    }
                    arr_69 [i_18] [i_17 - 2] = ((long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_0))) >= (arr_45 [i_0] [i_0] [i_17 + 1] [i_18 + 1] [12U])));
                    var_54 = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)51773)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)8666))) : (7109088260375355116LL)));
                }
            } 
        } 
        /* LoopNest 2 */
        for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
        {
            for (signed char i_22 = 2; i_22 < 21; i_22 += 2) 
            {
                {
                    var_55 = ((/* implicit */unsigned short) max((var_55), (((/* implicit */unsigned short) ((((/* implicit */_Bool) 8048030141005982341LL)) ? (arr_45 [i_22] [i_22 + 3] [i_22] [i_22 + 3] [i_22 + 1]) : (arr_45 [13ULL] [i_22] [14ULL] [i_22 + 2] [i_22 - 2]))))));
                    var_56 = ((/* implicit */short) ((unsigned short) (unsigned short)37852));
                }
            } 
        } 
        var_57 = ((/* implicit */_Bool) min((var_57), (((/* implicit */_Bool) ((short) (_Bool)1)))));
    }
    var_58 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (0U)))))) ? ((+(((/* implicit */int) var_0)))) : ((((-(58720256))) * (((/* implicit */int) (_Bool)1))))));
    var_59 = ((/* implicit */unsigned char) max((((/* implicit */long long int) (~((+(((/* implicit */int) (signed char)120))))))), ((~(((((/* implicit */_Bool) var_9)) ? (1512403745624662000LL) : (((/* implicit */long long int) ((/* implicit */int) var_10)))))))));
    var_60 = ((/* implicit */int) var_17);
}
