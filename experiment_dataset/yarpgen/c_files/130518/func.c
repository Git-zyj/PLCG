/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130518
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130518 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130518
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
    var_20 &= ((/* implicit */short) var_3);
    var_21 = ((/* implicit */int) min((var_21), ((+(-905027513)))));
    /* LoopSeq 4 */
    for (int i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        var_22 = ((/* implicit */int) (!(((/* implicit */_Bool) var_10))));
        /* LoopSeq 3 */
        for (signed char i_1 = 3; i_1 < 19; i_1 += 2) 
        {
            var_23 = ((/* implicit */short) min(((unsigned short)5782), (((/* implicit */unsigned short) (_Bool)0))));
            var_24 = ((/* implicit */long long int) max((((((/* implicit */_Bool) min((arr_2 [i_1 + 1]), (arr_1 [21])))) ? (arr_5 [i_1] [i_1]) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (_Bool)0)) : (-92920691))))), (max((((((/* implicit */_Bool) 92920716)) ? (((/* implicit */int) (unsigned short)5223)) : (((/* implicit */int) var_7)))), ((-(((/* implicit */int) (short)4038))))))));
            arr_6 [i_0] [i_1 - 1] [i_1] = (i_1 % 2 == 0) ? (((/* implicit */unsigned short) min((((/* implicit */int) (short)-31628)), (((((arr_5 [i_1] [i_1 + 1]) + (2147483647))) << (((((arr_5 [i_1] [i_1 + 2]) + (171332358))) - (18)))))))) : (((/* implicit */unsigned short) min((((/* implicit */int) (short)-31628)), (((((((arr_5 [i_1] [i_1 + 1]) - (2147483647))) + (2147483647))) << (((((((arr_5 [i_1] [i_1 + 2]) + (171332358))) - (18))) - (622189951))))))));
        }
        for (int i_2 = 1; i_2 < 22; i_2 += 4) 
        {
            var_25 = ((/* implicit */signed char) ((((/* implicit */int) max(((short)0), (((/* implicit */short) (signed char)0))))) ^ (((/* implicit */int) min((arr_3 [i_2 + 1]), (((/* implicit */unsigned short) var_11)))))));
            var_26 *= ((/* implicit */short) (!(((/* implicit */_Bool) (unsigned short)0))));
            var_27 = ((((/* implicit */int) ((((/* implicit */int) (short)5971)) <= (0)))) & ((~(0))));
        }
        for (short i_3 = 0; i_3 < 23; i_3 += 4) 
        {
            var_28 = ((/* implicit */short) (+(((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)23492))))) ? (-1379126761) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_0] [i_3] [i_0])))))))));
            var_29 = ((/* implicit */_Bool) max(((short)21007), (((/* implicit */short) max(((signed char)-45), ((signed char)0))))));
            var_30 = ((/* implicit */unsigned short) 0LL);
        }
        var_31 = ((/* implicit */unsigned short) max((((/* implicit */int) min((arr_4 [i_0] [i_0] [i_0]), (arr_4 [i_0] [i_0] [i_0])))), ((+(((/* implicit */int) arr_0 [i_0] [i_0]))))));
        arr_12 [i_0] = ((/* implicit */_Bool) max((max((((/* implicit */long long int) min((((/* implicit */unsigned short) var_11)), ((unsigned short)0)))), (max((((/* implicit */long long int) (signed char)0)), (var_12))))), (((/* implicit */long long int) min((0), (0))))));
    }
    for (short i_4 = 0; i_4 < 18; i_4 += 2) 
    {
        /* LoopNest 3 */
        for (signed char i_5 = 0; i_5 < 18; i_5 += 4) 
        {
            for (int i_6 = 1; i_6 < 16; i_6 += 2) 
            {
                for (long long int i_7 = 0; i_7 < 18; i_7 += 2) 
                {
                    {
                        var_32 |= ((/* implicit */unsigned short) max((min(((~(((/* implicit */int) arr_8 [i_4] [i_5])))), (((/* implicit */int) max((((/* implicit */unsigned short) (short)-28860)), ((unsigned short)0)))))), (((/* implicit */int) (_Bool)0))));
                        var_33 = ((/* implicit */unsigned short) var_8);
                        var_34 = ((/* implicit */long long int) min((((/* implicit */int) (_Bool)1)), (((((/* implicit */int) ((((/* implicit */int) var_15)) >= (((/* implicit */int) arr_23 [i_4] [i_5] [i_5] [i_6] [i_4] [i_7]))))) * ((+(((/* implicit */int) var_4))))))));
                        var_35 = ((/* implicit */short) (~(((((/* implicit */_Bool) arr_23 [i_6 - 1] [i_6 - 1] [i_6] [i_6] [i_6 + 2] [i_6 - 1])) ? ((~(((/* implicit */int) var_18)))) : (arr_15 [i_6 - 1] [i_6])))));
                        var_36 = ((/* implicit */signed char) (short)-28860);
                    }
                } 
            } 
        } 
        var_37 |= ((/* implicit */long long int) (-(min((((/* implicit */int) var_9)), (((var_17) + (arr_5 [i_4] [i_4])))))));
    }
    /* vectorizable */
    for (long long int i_8 = 0; i_8 < 19; i_8 += 4) 
    {
        var_38 = ((/* implicit */int) min((var_38), ((-(((/* implicit */int) arr_7 [i_8] [i_8] [i_8]))))));
        var_39 = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_7 [i_8] [i_8] [i_8]))));
    }
    /* vectorizable */
    for (int i_9 = 1; i_9 < 19; i_9 += 2) 
    {
        var_40 = ((/* implicit */unsigned short) var_9);
        var_41 = ((/* implicit */short) max((var_41), (((/* implicit */short) ((((/* implicit */_Bool) arr_29 [i_9 - 1])) ? (((/* implicit */int) arr_29 [i_9 - 1])) : (((/* implicit */int) arr_29 [i_9 - 1])))))));
        var_42 -= var_4;
        var_43 += var_9;
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_10 = 2; i_10 < 11; i_10 += 4) 
    {
        /* LoopNest 2 */
        for (short i_11 = 0; i_11 < 13; i_11 += 3) 
        {
            for (int i_12 = 0; i_12 < 13; i_12 += 2) 
            {
                {
                    var_44 = ((((/* implicit */_Bool) 0LL)) ? (((/* implicit */int) arr_8 [i_10 + 2] [i_10 + 1])) : (((/* implicit */int) arr_8 [i_10 + 1] [i_10 - 2])));
                    var_45 = ((/* implicit */short) min((var_45), (var_13)));
                    var_46 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_30 [i_10]))));
                    /* LoopSeq 1 */
                    for (unsigned short i_13 = 0; i_13 < 13; i_13 += 2) 
                    {
                        arr_42 [0] [0] [i_11] [i_12] [i_13] = ((/* implicit */short) ((((/* implicit */int) ((var_8) != (arr_33 [i_10] [i_11])))) + (-1617157989)));
                        var_47 = ((/* implicit */int) var_7);
                    }
                }
            } 
        } 
        var_48 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_5 [i_10] [i_10])) ? (arr_5 [i_10] [i_10]) : (arr_5 [i_10] [i_10])));
    }
}
