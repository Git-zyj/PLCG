/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137726
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137726 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137726
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
    var_10 = ((/* implicit */unsigned long long int) (short)-5299);
    var_11 = ((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_6))) % (var_5)))) ? (((/* implicit */int) var_6)) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_0)) : (var_7))))) > (((/* implicit */int) var_0))));
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 20; i_0 += 2) /* same iter space */
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned long long int) min((((unsigned int) arr_1 [i_0])), (((/* implicit */unsigned int) (~(arr_1 [i_0]))))));
        var_12 *= ((/* implicit */unsigned char) var_9);
        var_13 = ((((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0]))))) <= (((/* implicit */int) arr_2 [i_0])));
    }
    for (long long int i_1 = 0; i_1 < 20; i_1 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (signed char i_2 = 0; i_2 < 20; i_2 += 4) 
        {
            for (unsigned int i_3 = 4; i_3 < 19; i_3 += 4) 
            {
                {
                    var_14 = ((/* implicit */short) min((((/* implicit */unsigned long long int) ((((arr_6 [i_3 + 1] [i_3 + 1] [i_3 + 1]) + (9223372036854775807LL))) << (((((arr_6 [i_3 - 4] [i_3] [(unsigned char)11]) + (6250507111176213531LL))) - (51LL)))))), (min((max((arr_10 [i_2] [(signed char)19]), (((/* implicit */unsigned long long int) var_5)))), (((/* implicit */unsigned long long int) min((var_1), (var_1))))))));
                    arr_12 [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_1 [i_1])) ? (((arr_7 [i_2] [i_3]) ? (((/* implicit */int) max((arr_11 [1U] [i_2] [i_3]), (((/* implicit */short) arr_7 [(short)10] [i_2]))))) : ((~(((/* implicit */int) arr_8 [15ULL] [15ULL])))))) : (((/* implicit */int) ((_Bool) min((((/* implicit */unsigned int) -1737585816)), (var_5)))))));
                    var_15 += ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) 850556866))))), (3839486186U))))));
                    var_16 = ((/* implicit */unsigned long long int) 1050992177U);
                    var_17 = (!(((/* implicit */_Bool) var_0)));
                }
            } 
        } 
        /* LoopSeq 1 */
        for (short i_4 = 0; i_4 < 20; i_4 += 2) 
        {
            arr_16 [i_4] = ((/* implicit */_Bool) (unsigned char)199);
            var_18 = ((/* implicit */unsigned short) 5074039846773949369ULL);
            /* LoopSeq 1 */
            for (unsigned int i_5 = 0; i_5 < 20; i_5 += 3) 
            {
                var_19 = ((/* implicit */unsigned long long int) -1430266715);
                var_20 = (i_5 % 2 == zero) ? (((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((((arr_19 [i_5] [i_5] [i_5] [i_5]) + (2147483647))) << (((((arr_19 [i_5] [i_5] [i_5] [i_5]) + (228858198))) - (17)))))), (((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_9 [i_1] [9] [i_5] [i_5]))))) ^ (min((((/* implicit */unsigned long long int) (_Bool)1)), (arr_17 [i_1] [i_5] [9LL])))))))) : (((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((((arr_19 [i_5] [i_5] [i_5] [i_5]) + (2147483647))) << (((((((((arr_19 [i_5] [i_5] [i_5] [i_5]) + (228858198))) - (17))) + (1230007845))) - (10)))))), (((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_9 [i_1] [9] [i_5] [i_5]))))) ^ (min((((/* implicit */unsigned long long int) (_Bool)1)), (arr_17 [i_1] [i_5] [9LL]))))))));
                var_21 += ((/* implicit */unsigned short) arr_13 [4ULL] [(unsigned char)11]);
                var_22 = ((/* implicit */_Bool) arr_5 [i_5]);
            }
        }
        var_23 = ((/* implicit */long long int) min((arr_13 [i_1] [i_1]), (((/* implicit */unsigned long long int) min(((((_Bool)1) ? (((/* implicit */int) (unsigned char)56)) : (((/* implicit */int) arr_18 [i_1] [(short)12] [i_1])))), (max((((/* implicit */int) arr_2 [i_1])), (arr_19 [i_1] [6] [i_1] [(_Bool)1]))))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (short i_6 = 0; i_6 < 20; i_6 += 4) 
        {
            var_24 = ((/* implicit */int) arr_6 [i_1] [i_1] [i_6]);
            var_25 = (+(((/* implicit */int) arr_8 [4LL] [4LL])));
            var_26 &= ((/* implicit */short) (-(arr_5 [i_6])));
            arr_23 [(short)17] [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_21 [i_6])) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [5U] [i_6]))) & (arr_17 [i_1] [i_6] [i_6]))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (_Bool)1)))))));
        }
        for (signed char i_7 = 0; i_7 < 20; i_7 += 1) 
        {
            arr_27 [i_7] = ((/* implicit */short) arr_24 [i_7]);
            var_27 += (+(((/* implicit */int) ((_Bool) var_4))));
            var_28 = ((/* implicit */unsigned long long int) arr_26 [i_1]);
        }
        var_29 = ((/* implicit */short) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 6493926367999326360LL))))), (min((((/* implicit */unsigned long long int) arr_22 [i_1])), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (arr_13 [(short)17] [(short)17])))))));
    }
    for (long long int i_8 = 0; i_8 < 20; i_8 += 2) /* same iter space */
    {
        /* LoopSeq 4 */
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) /* same iter space */
        {
            var_30 = ((/* implicit */short) (+(((/* implicit */int) (!(((/* implicit */_Bool) -1801526028)))))));
            var_31 = ((/* implicit */unsigned char) (short)5466);
            var_32 = arr_1 [i_8];
        }
        /* vectorizable */
        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) /* same iter space */
        {
            var_33 = ((/* implicit */long long int) (unsigned char)196);
            var_34 += ((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) arr_19 [i_8] [i_10] [i_8] [i_8]))) ? (arr_31 [i_10] [i_10]) : (((/* implicit */int) (unsigned char)183))));
            /* LoopNest 2 */
            for (int i_11 = 0; i_11 < 20; i_11 += 3) 
            {
                for (_Bool i_12 = 0; i_12 < 0; i_12 += 1) 
                {
                    {
                        var_35 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 7707984968998245639ULL)) ? (((/* implicit */int) arr_40 [i_11] [i_10] [i_8])) : (((/* implicit */int) arr_33 [i_10] [i_10]))));
                        var_36 = ((/* implicit */unsigned int) (unsigned char)166);
                    }
                } 
            } 
        }
        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) /* same iter space */
        {
            var_37 += ((/* implicit */unsigned short) ((((/* implicit */int) arr_7 [i_8] [i_8])) * (((((/* implicit */int) min(((short)-5466), ((short)-9264)))) / (((/* implicit */int) arr_44 [i_8]))))));
            var_38 = ((/* implicit */unsigned int) ((min(((!(((/* implicit */_Bool) 2329071380U)))), (((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) 1492815201824451183LL)))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) 382817170)) ? (((/* implicit */int) (signed char)122)) : (((/* implicit */int) (unsigned short)13253)))))));
            /* LoopNest 3 */
            for (signed char i_14 = 0; i_14 < 20; i_14 += 2) 
            {
                for (int i_15 = 0; i_15 < 20; i_15 += 2) 
                {
                    for (_Bool i_16 = 1; i_16 < 1; i_16 += 1) 
                    {
                        {
                            var_39 &= ((/* implicit */int) ((short) ((((/* implicit */int) var_2)) + (((/* implicit */int) arr_11 [i_16 - 1] [i_16 - 1] [i_13])))));
                            var_40 = ((((/* implicit */_Bool) min((((/* implicit */unsigned short) (!(((/* implicit */_Bool) 4214543418027110083ULL))))), ((unsigned short)52271)))) ? (min((((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) % (arr_39 [i_8] [i_8] [i_8]))), (((/* implicit */unsigned long long int) max((arr_34 [i_16]), (arr_50 [i_13] [i_15] [i_13])))))) : (((/* implicit */unsigned long long int) max(((~(((/* implicit */int) arr_24 [i_8])))), ((~(arr_1 [12LL])))))));
                            var_41 = ((/* implicit */int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_51 [i_16 - 1] [i_16 - 1] [i_13] [i_16 - 1] [19ULL])) && (((/* implicit */_Bool) var_5))))), (var_1)));
                        }
                    } 
                } 
            } 
            var_42 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_51 [i_8] [0U] [i_8] [(unsigned short)10] [i_8])) ? (((/* implicit */int) (short)29209)) : (((/* implicit */int) ((unsigned short) arr_51 [(short)2] [i_13] [i_8] [i_8] [i_8])))));
        }
        for (unsigned short i_17 = 0; i_17 < 20; i_17 += 2) 
        {
            var_43 = ((/* implicit */int) ((_Bool) var_7));
            /* LoopSeq 1 */
            for (int i_18 = 0; i_18 < 20; i_18 += 3) 
            {
                /* LoopSeq 2 */
                for (_Bool i_19 = 1; i_19 < 1; i_19 += 1) 
                {
                    var_44 &= ((/* implicit */short) 63461284U);
                    var_45 = max((max((((/* implicit */int) arr_58 [i_8] [i_8])), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (signed char)-23)) : (((/* implicit */int) arr_30 [i_8])))))), (((/* implicit */int) arr_18 [i_18] [i_18] [i_18])));
                    var_46 = ((/* implicit */int) ((unsigned int) arr_61 [i_17] [i_17] [i_17] [(short)14] [i_19 - 1]));
                    var_47 &= ((/* implicit */unsigned char) min((min((((((/* implicit */unsigned int) ((/* implicit */int) (short)-29209))) / (3016635470U))), (((/* implicit */unsigned int) (short)-28135)))), (((/* implicit */unsigned int) (~(((((/* implicit */int) arr_34 [i_17])) & (((/* implicit */int) arr_46 [i_17])))))))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_20 = 0; i_20 < 20; i_20 += 3) 
                    {
                        var_48 = ((/* implicit */int) min((((((/* implicit */_Bool) (signed char)-122)) ? (((/* implicit */unsigned long long int) -850556845)) : (arr_10 [i_19] [i_19 - 1]))), (max((7189272769323509029ULL), (arr_10 [9] [i_19 - 1])))));
                        var_49 |= ((/* implicit */unsigned int) ((short) arr_1 [i_19]));
                    }
                }
                for (unsigned short i_21 = 1; i_21 < 19; i_21 += 2) 
                {
                    var_50 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned int) arr_62 [i_8] [(unsigned short)14] [i_18] [i_21] [i_8]))) ? (((((/* implicit */int) arr_62 [2LL] [2LL] [i_18] [(_Bool)1] [5])) ^ (((/* implicit */int) (_Bool)0)))) : ((-(((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))))));
                    var_51 &= ((/* implicit */long long int) (_Bool)1);
                }
                arr_67 [i_18] [(_Bool)1] [(_Bool)1] [i_18] = ((/* implicit */short) (-(min(((+(((/* implicit */int) (short)-28135)))), (arr_56 [i_8] [i_8] [i_18])))));
            }
        }
        arr_68 [i_8] [i_8] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) min((((/* implicit */short) (unsigned char)73)), (arr_11 [i_8] [i_8] [i_8]))))));
        var_52 = ((max((((/* implicit */unsigned long long int) (+(arr_51 [(signed char)4] [i_8] [i_8] [i_8] [i_8])))), (arr_55 [i_8] [i_8]))) / (((/* implicit */unsigned long long int) (-(min((var_1), (((/* implicit */unsigned int) arr_40 [i_8] [i_8] [i_8]))))))));
    }
}
