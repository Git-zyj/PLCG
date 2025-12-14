/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150344
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150344 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150344
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
    var_16 = (-(((/* implicit */int) (short)-4563)));
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        var_17 -= ((/* implicit */unsigned char) var_8);
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned char i_1 = 0; i_1 < 10; i_1 += 2) /* same iter space */
        {
            arr_5 [i_0] [i_1] [6] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1))));
            /* LoopNest 2 */
            for (unsigned int i_2 = 1; i_2 < 6; i_2 += 2) 
            {
                for (short i_3 = 0; i_3 < 10; i_3 += 2) 
                {
                    {
                        var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) ((17609060306287094881ULL) * (((/* implicit */unsigned long long int) 17U)))))));
                        arr_12 [(_Bool)1] [(_Bool)1] [i_1] [(unsigned short)9] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_8 [(_Bool)1] [i_2 + 4])) - (((/* implicit */int) (unsigned char)0))));
                        var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) ((((/* implicit */_Bool) 2112785448)) ? ((~(((/* implicit */int) (short)15282)))) : (((((/* implicit */_Bool) 17665627004506964075ULL)) ? (((/* implicit */int) (short)-15292)) : (((/* implicit */int) (unsigned char)254)))))))));
                        var_20 = ((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)7936))));
                    }
                } 
            } 
        }
        for (unsigned char i_4 = 0; i_4 < 10; i_4 += 2) /* same iter space */
        {
            /* LoopSeq 1 */
            for (short i_5 = 0; i_5 < 10; i_5 += 2) 
            {
                arr_17 [i_0] [i_0] [(unsigned short)4] [(unsigned short)9] = ((/* implicit */int) min((9058199822546048004ULL), (((unsigned long long int) arr_3 [i_0] [i_4] [i_5]))));
                var_21 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)0))));
                var_22 = ((/* implicit */unsigned char) arr_10 [i_0] [i_0]);
                var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) var_8))));
            }
            /* LoopNest 2 */
            for (long long int i_6 = 1; i_6 < 9; i_6 += 4) 
            {
                for (unsigned short i_7 = 0; i_7 < 10; i_7 += 4) 
                {
                    {
                        arr_22 [(unsigned short)2] = ((/* implicit */long long int) arr_9 [i_4] [6LL] [i_6 - 1]);
                        var_24 = ((/* implicit */int) var_13);
                    }
                } 
            } 
            var_25 = (+(((((/* implicit */_Bool) (short)15263)) ? (1295220626) : (((/* implicit */int) (_Bool)0)))));
        }
        for (unsigned char i_8 = 0; i_8 < 10; i_8 += 2) /* same iter space */
        {
            arr_25 [4LL] [4LL] = ((/* implicit */unsigned int) (~(((/* implicit */int) ((unsigned char) -1LL)))));
            var_26 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_15 [i_8])) ? (((long long int) 5888986009987374663ULL)) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) > (((/* implicit */long long int) ((/* implicit */int) (short)7936)))));
            arr_26 [i_8] [5U] = ((/* implicit */signed char) var_1);
        }
    }
    for (long long int i_9 = 0; i_9 < 11; i_9 += 4) 
    {
        var_27 = ((/* implicit */_Bool) min(((unsigned short)33696), (((/* implicit */unsigned short) (short)-15292))));
        var_28 += ((/* implicit */short) (-(((/* implicit */int) (unsigned char)38))));
    }
    for (long long int i_10 = 0; i_10 < 17; i_10 += 1) 
    {
        arr_35 [i_10] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((unsigned short) -849919178537056972LL))) ? (((((/* implicit */_Bool) -1502807595)) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (1LL))) : (-616422149438530760LL))) * (-5661415016528427893LL)));
        arr_36 [i_10] [i_10] = var_9;
        var_29 = ((/* implicit */long long int) ((_Bool) ((((/* implicit */long long int) ((/* implicit */int) (signed char)87))) | (7967538081367791504LL))));
        arr_37 [i_10] = (((_Bool)1) ? (1LL) : (-1LL));
        var_30 = ((/* implicit */signed char) max((var_30), (((/* implicit */signed char) max((((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -616422149438530750LL)) ? (1295220627) : (((/* implicit */int) (signed char)-67)))))))), ((short)-9282))))));
    }
    /* LoopNest 3 */
    for (short i_11 = 0; i_11 < 17; i_11 += 1) 
    {
        for (long long int i_12 = 0; i_12 < 17; i_12 += 1) 
        {
            for (unsigned short i_13 = 0; i_13 < 17; i_13 += 1) 
            {
                {
                    var_31 = ((/* implicit */_Bool) var_4);
                    var_32 = ((/* implicit */long long int) (!(((/* implicit */_Bool) -1640474025))));
                    arr_44 [(unsigned char)16] [(_Bool)1] [i_13] = ((/* implicit */int) var_11);
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_14 = 0; i_14 < 20; i_14 += 2) 
    {
        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
        {
            {
                var_33 = ((/* implicit */short) (+(((/* implicit */int) min((((/* implicit */short) (signed char)-2)), (var_0))))));
                /* LoopSeq 1 */
                for (unsigned long long int i_16 = 0; i_16 < 20; i_16 += 2) 
                {
                    var_34 = ((/* implicit */_Bool) (~(((/* implicit */int) var_8))));
                    arr_53 [i_14] [4U] [(_Bool)1] = ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)101)) - (((/* implicit */int) (short)-716))));
                    /* LoopNest 2 */
                    for (unsigned int i_17 = 1; i_17 < 18; i_17 += 2) 
                    {
                        for (signed char i_18 = 0; i_18 < 20; i_18 += 1) 
                        {
                            {
                                arr_60 [19LL] [19LL] [(unsigned char)0] [(short)13] [i_18] = ((/* implicit */long long int) ((((/* implicit */_Bool) 1295220626)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)244))) : (3944762388U)));
                                var_35 = ((/* implicit */int) var_9);
                                var_36 = ((/* implicit */unsigned char) ((signed char) (short)-15283));
                                var_37 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)255))) - (7049593100277553248ULL)));
                            }
                        } 
                    } 
                    var_38 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) (short)-15282))) / (-1241684864596190561LL)));
                }
            }
        } 
    } 
}
