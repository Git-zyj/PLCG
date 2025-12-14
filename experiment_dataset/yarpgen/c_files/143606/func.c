/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143606
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143606 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143606
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
    var_16 = ((/* implicit */unsigned char) var_13);
    var_17 |= ((/* implicit */unsigned char) (_Bool)1);
    var_18 &= ((/* implicit */short) ((((/* implicit */_Bool) (+(var_14)))) ? ((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (2145386496U))) : (((/* implicit */unsigned int) var_2))));
    /* LoopSeq 4 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned int) (_Bool)1);
        arr_5 [(unsigned char)1] [i_0] = ((/* implicit */unsigned short) (_Bool)1);
    }
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 22; i_2 += 3) 
        {
            for (unsigned long long int i_3 = 1; i_3 < 18; i_3 += 4) 
            {
                {
                    var_19 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned short) (unsigned short)6256))) ? (arr_12 [(unsigned short)0] [(_Bool)1] [(unsigned short)13]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                    var_20 = ((/* implicit */_Bool) (~(((/* implicit */int) var_5))));
                    arr_16 [i_2] [i_3 + 1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)59872)) ? (-5300459759539285076LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)236)))));
                }
            } 
        } 
        var_21 |= ((/* implicit */short) (signed char)123);
        var_22 = ((/* implicit */short) ((((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) (unsigned short)8191)))) != (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)92))) >= (1899653555834720801LL))))));
    }
    for (short i_4 = 3; i_4 < 8; i_4 += 4) 
    {
        arr_19 [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_4 - 1] [i_4 + 2] [i_4])) ? (arr_0 [i_4 - 1]) : (arr_0 [14LL])))) ? (((/* implicit */int) ((((/* implicit */int) (unsigned short)59872)) != (((/* implicit */int) var_4))))) : (((/* implicit */int) ((arr_11 [(short)14] [i_4 + 2] [i_4]) >= (arr_11 [(signed char)2] [i_4 + 2] [(signed char)2]))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned long long int i_5 = 1; i_5 < 7; i_5 += 1) 
        {
            arr_22 [i_5] [i_4] [i_4] = arr_21 [i_5] [i_4];
            var_23 = ((/* implicit */_Bool) max((var_23), (((/* implicit */_Bool) arr_17 [8U]))));
            /* LoopNest 2 */
            for (long long int i_6 = 2; i_6 < 9; i_6 += 2) 
            {
                for (long long int i_7 = 0; i_7 < 10; i_7 += 4) 
                {
                    {
                        var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) ((((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)8184))))) ^ (arr_2 [i_4]))))));
                        var_25 |= ((/* implicit */unsigned char) var_10);
                        arr_30 [i_4] [8ULL] [i_6] [i_4] = ((/* implicit */_Bool) (+(arr_27 [(_Bool)1] [i_4 + 2] [i_4] [i_6 + 1])));
                        var_26 = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)124))) != (4889440148107305851ULL)))) ^ (((/* implicit */int) ((((/* implicit */int) var_10)) == (((/* implicit */int) (unsigned short)13691)))))));
                    }
                } 
            } 
            var_27 &= ((/* implicit */_Bool) ((((/* implicit */int) ((_Bool) -1598716902))) << (((((/* implicit */unsigned int) ((/* implicit */int) var_10))) & (676456370U)))));
            arr_31 [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)63475))) ^ (arr_18 [i_4] [i_4])));
        }
        /* vectorizable */
        for (signed char i_8 = 1; i_8 < 7; i_8 += 3) 
        {
            var_28 *= ((/* implicit */short) (-((((_Bool)1) ? (((/* implicit */int) arr_32 [(short)8] [i_8])) : (((/* implicit */int) (_Bool)1))))));
            arr_35 [i_4] [i_8] = ((/* implicit */unsigned short) (~(((/* implicit */int) var_6))));
            arr_36 [i_4] [i_4] = ((/* implicit */signed char) (~(-1899653555834720809LL)));
            var_29 -= ((/* implicit */long long int) arr_15 [i_8] [i_8 + 1] [i_8 - 1]);
            /* LoopSeq 1 */
            for (int i_9 = 0; i_9 < 10; i_9 += 2) 
            {
                arr_39 [i_4] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */int) var_11)) * (((/* implicit */int) arr_23 [i_4] [i_8 + 3] [i_8 + 1] [i_4 - 3]))));
                var_30 = ((/* implicit */signed char) min((var_30), (((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)63)) ? (((var_6) ? (((/* implicit */unsigned long long int) 1899653555834720817LL)) : (4377335051711815206ULL))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1))))))))));
            }
        }
        arr_40 [8U] |= ((/* implicit */short) max((max((-1899653555834720809LL), (((/* implicit */long long int) (short)-15232)))), (((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)215))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)33596)))))));
    }
    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned long long int i_11 = 0; i_11 < 14; i_11 += 4) 
        {
            for (short i_12 = 1; i_12 < 12; i_12 += 4) 
            {
                for (_Bool i_13 = 0; i_13 < 0; i_13 += 1) 
                {
                    {
                        arr_52 [i_11] [i_12] = ((/* implicit */signed char) ((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)0)), ((unsigned char)91))))));
                        arr_53 [i_11] = ((/* implicit */unsigned short) min((((/* implicit */long long int) (signed char)50)), (min((0LL), (((/* implicit */long long int) arr_45 [i_12 - 1] [i_12 - 1] [i_13 + 1]))))));
                        var_31 = ((/* implicit */long long int) ((unsigned long long int) ((((/* implicit */_Bool) ((short) var_15))) ? (((((/* implicit */int) arr_46 [i_11])) ^ (((/* implicit */int) var_13)))) : ((~(((/* implicit */int) arr_41 [i_10] [i_10])))))));
                    }
                } 
            } 
        } 
        arr_54 [i_10] = ((/* implicit */unsigned short) (~(((/* implicit */int) var_4))));
        /* LoopNest 3 */
        for (unsigned int i_14 = 0; i_14 < 14; i_14 += 4) 
        {
            for (unsigned int i_15 = 0; i_15 < 14; i_15 += 1) 
            {
                for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                {
                    {
                        var_32 *= ((/* implicit */unsigned short) (((~(((((/* implicit */_Bool) (unsigned short)4088)) ? (14202048992816101894ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-51))))))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [(_Bool)1] [i_15] [i_16])))));
                        var_33 ^= ((/* implicit */_Bool) ((1899653555834720823LL) + (((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */_Bool) 16549004397976459012ULL)) ? (((/* implicit */int) arr_63 [i_10] [i_14] [(_Bool)1] [i_16])) : (var_2))) <= (((((/* implicit */_Bool) -9182397640680242287LL)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1))))))))));
                        var_34 = ((/* implicit */unsigned int) min((var_34), (((/* implicit */unsigned int) (~(max((((/* implicit */int) (!((_Bool)1)))), (((((/* implicit */int) (unsigned short)61433)) << (((((/* implicit */int) arr_62 [i_10] [i_14] [i_15] [i_16])) + (53))))))))))));
                        arr_64 [i_16] [i_15] = ((/* implicit */signed char) ((unsigned char) ((((/* implicit */int) arr_15 [i_14] [i_14] [i_16])) / (((/* implicit */int) ((unsigned char) arr_46 [6U]))))));
                    }
                } 
            } 
        } 
        /* LoopSeq 1 */
        for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
        {
            /* LoopNest 2 */
            for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
            {
                for (signed char i_19 = 0; i_19 < 14; i_19 += 4) 
                {
                    {
                        var_35 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((7351551002431038127ULL) % (((/* implicit */unsigned long long int) -2396613731883011975LL))))) ? (min((arr_43 [i_10]), (arr_43 [i_10]))) : (((/* implicit */unsigned long long int) 12))));
                        var_36 = ((/* implicit */unsigned short) (((~(644175181U))) * (((/* implicit */unsigned int) ((/* implicit */int) arr_67 [i_17])))));
                        var_37 = ((/* implicit */long long int) max((max(((-(((/* implicit */int) arr_66 [i_19] [1ULL])))), (((/* implicit */int) (unsigned short)65531)))), (((((/* implicit */_Bool) max((var_12), (((/* implicit */unsigned short) var_13))))) ? (((/* implicit */int) ((arr_56 [(_Bool)1]) > (((/* implicit */long long int) var_9))))) : (((/* implicit */int) arr_42 [i_17] [i_18]))))));
                    }
                } 
            } 
            /* LoopSeq 4 */
            for (signed char i_20 = 0; i_20 < 14; i_20 += 3) 
            {
                var_38 |= ((/* implicit */signed char) var_0);
                arr_76 [i_20] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (((~(((/* implicit */int) arr_63 [0] [i_17] [0] [i_20])))) ^ (((/* implicit */int) ((((/* implicit */int) (short)0)) != (((/* implicit */int) arr_69 [i_10] [(signed char)9] [i_20])))))))) ? (((((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */unsigned long long int) 998784449251910260LL)) : (arr_59 [i_10] [i_10] [i_20] [i_10]))) << (((((/* implicit */int) var_15)) - (215))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */int) var_1)) / (((/* implicit */int) (signed char)-52)))) > ((+(((/* implicit */int) (unsigned char)223))))))))));
                var_39 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_9 [i_20] [i_17]), (arr_9 [i_17] [i_20]))))) - (280375465082880ULL)));
            }
            /* vectorizable */
            for (long long int i_21 = 0; i_21 < 14; i_21 += 3) 
            {
                var_40 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_47 [i_10] [i_17] [i_17] [13LL])) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned char)31))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : ((~(arr_75 [i_10] [i_17] [i_17] [(unsigned char)8])))));
                arr_79 [(unsigned char)1] [i_17] [(unsigned char)1] = ((/* implicit */_Bool) ((((/* implicit */int) arr_58 [i_21] [i_17] [i_10])) % (((/* implicit */int) arr_66 [i_17] [i_10]))));
            }
            for (unsigned char i_22 = 0; i_22 < 14; i_22 += 3) 
            {
                var_41 *= ((/* implicit */unsigned int) (_Bool)1);
                var_42 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */int) arr_45 [i_22] [i_17] [(unsigned char)1])), ((~(((/* implicit */int) (_Bool)0))))))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_41 [i_10] [i_17]))));
                arr_82 [i_10] [i_10] [9ULL] = ((/* implicit */long long int) 18446463698244468742ULL);
            }
            for (long long int i_23 = 3; i_23 < 11; i_23 += 3) 
            {
                arr_85 [i_23] [i_23 - 3] [i_10] [i_10] |= ((/* implicit */unsigned long long int) -1);
                var_43 *= ((/* implicit */short) max((((/* implicit */signed char) var_0)), ((signed char)31)));
            }
        }
        var_44 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_68 [i_10] [i_10])) ^ (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) min((arr_68 [i_10] [i_10]), (arr_68 [i_10] [i_10])))) : (((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)0)), ((unsigned short)60792))))));
    }
}
