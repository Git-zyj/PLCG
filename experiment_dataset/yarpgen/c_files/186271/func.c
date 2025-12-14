/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186271
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186271 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186271
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
    var_14 = ((/* implicit */unsigned int) max((var_14), (((((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_10)) ? (var_2) : (((/* implicit */unsigned int) var_4))))))) ? (var_2) : (((/* implicit */unsigned int) var_3))))));
    var_15 = ((/* implicit */_Bool) ((long long int) (_Bool)1));
    /* LoopSeq 4 */
    for (signed char i_0 = 1; i_0 < 12; i_0 += 1) 
    {
        var_16 &= ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((arr_0 [i_0] [i_0]) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [(unsigned char)12])))))) || (((/* implicit */_Bool) arr_1 [6ULL])))))) | (max((((/* implicit */long long int) min((var_4), (var_11)))), (min((6486815049346433051LL), (((/* implicit */long long int) var_11))))))));
        var_17 -= ((/* implicit */long long int) ((unsigned char) min((arr_1 [(unsigned char)6]), (arr_0 [i_0 + 1] [i_0 - 1]))));
    }
    for (short i_1 = 0; i_1 < 19; i_1 += 3) 
    {
        var_18 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) max((arr_6 [i_1]), (arr_6 [i_1]))))));
        arr_7 [i_1] [i_1] = ((/* implicit */unsigned char) arr_6 [i_1]);
        var_19 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) var_4))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 6486815049346433045LL))))) : (((/* implicit */int) arr_6 [i_1])))))));
    }
    for (unsigned char i_2 = 1; i_2 < 8; i_2 += 2) /* same iter space */
    {
        /* LoopNest 3 */
        for (unsigned char i_3 = 0; i_3 < 10; i_3 += 2) 
        {
            for (int i_4 = 0; i_4 < 10; i_4 += 3) 
            {
                for (short i_5 = 0; i_5 < 10; i_5 += 3) 
                {
                    {
                        var_20 = ((/* implicit */unsigned long long int) ((6486815049346433045LL) / (((/* implicit */long long int) 726108927))));
                        var_21 = ((/* implicit */short) min((6486815049346433045LL), (6486815049346433061LL)));
                        arr_17 [i_2] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_2 + 2] [i_2 + 2])))))) == (((((/* implicit */_Bool) ((((-6486815049346433061LL) + (9223372036854775807LL))) << (((var_9) - (16796662087220191987ULL)))))) ? (((/* implicit */unsigned long long int) ((unsigned int) arr_5 [i_4]))) : (max((9790633423191683437ULL), (((/* implicit */unsigned long long int) 6486815049346433051LL))))))));
                    }
                } 
            } 
        } 
        arr_18 [i_2] = ((/* implicit */unsigned char) max((((((arr_8 [i_2] [i_2]) >> (((arr_4 [i_2]) + (1197244736))))) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))), (((/* implicit */unsigned long long int) max((((var_11) | (arr_9 [i_2]))), (((/* implicit */int) max(((unsigned short)44270), (var_10)))))))));
        var_22 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) min((((/* implicit */unsigned short) arr_11 [i_2])), (var_10)))) + (((((/* implicit */int) var_0)) * (((/* implicit */int) var_13))))))) * (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_2 + 2] [i_2])) ? (((/* implicit */long long int) arr_4 [i_2 - 1])) : (-6486815049346433041LL)))) ? (arr_8 [i_2 + 2] [i_2 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)25815)))))));
        arr_19 [i_2] = ((/* implicit */int) min((((/* implicit */long long int) ((unsigned char) arr_15 [i_2 + 1] [i_2 - 1] [i_2] [i_2] [i_2 + 1] [i_2 + 2]))), (max((6486815049346433045LL), (((/* implicit */long long int) (unsigned char)111))))));
    }
    for (unsigned char i_6 = 1; i_6 < 8; i_6 += 2) /* same iter space */
    {
        /* LoopSeq 3 */
        for (signed char i_7 = 1; i_7 < 8; i_7 += 1) /* same iter space */
        {
            arr_24 [i_7] [i_6] [i_6] = ((/* implicit */unsigned short) arr_23 [i_6]);
            var_23 = ((/* implicit */unsigned char) (+(((((/* implicit */long long int) ((/* implicit */int) (unsigned short)39721))) | (arr_12 [i_6 - 1])))));
        }
        /* vectorizable */
        for (signed char i_8 = 1; i_8 < 8; i_8 += 1) /* same iter space */
        {
            var_24 |= ((/* implicit */short) (-(((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_6))))));
            var_25 &= ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) var_0)))))));
            /* LoopSeq 1 */
            for (unsigned int i_9 = 0; i_9 < 10; i_9 += 4) 
            {
                /* LoopNest 2 */
                for (unsigned long long int i_10 = 1; i_10 < 7; i_10 += 3) 
                {
                    for (unsigned long long int i_11 = 0; i_11 < 10; i_11 += 3) 
                    {
                        {
                            var_26 &= ((/* implicit */_Bool) (-(((/* implicit */int) arr_32 [i_11] [i_11] [i_11] [i_10] [i_10 + 3]))));
                            arr_34 [i_8] [i_9] [i_8] = ((/* implicit */unsigned short) (+(6486815049346433051LL)));
                        }
                    } 
                } 
                var_27 = ((/* implicit */short) arr_0 [i_9] [i_9]);
                var_28 = ((/* implicit */unsigned char) ((signed char) arr_11 [i_6 + 1]));
            }
            var_29 = ((/* implicit */int) ((((/* implicit */unsigned long long int) arr_4 [i_6 + 2])) * (var_9)));
        }
        for (unsigned char i_12 = 0; i_12 < 10; i_12 += 3) 
        {
            var_30 = ((/* implicit */unsigned char) max((((/* implicit */long long int) min(((unsigned char)5), (((/* implicit */unsigned char) (_Bool)1))))), (((long long int) arr_4 [i_6 + 2]))));
            /* LoopNest 2 */
            for (unsigned long long int i_13 = 0; i_13 < 10; i_13 += 4) 
            {
                for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                {
                    {
                        var_31 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned int) var_1))) ? (((long long int) -4454479526984904085LL)) : (((/* implicit */long long int) ((((var_4) > (((/* implicit */int) var_13)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)25809))))) : ((-(((/* implicit */int) var_5)))))))));
                        var_32 = ((/* implicit */int) max((var_32), (((((/* implicit */int) ((short) ((unsigned int) var_5)))) & (((/* implicit */int) max((((/* implicit */unsigned char) arr_10 [i_13] [i_6 + 2] [i_6 + 1])), (arr_36 [i_6 - 1] [i_6 + 2] [i_6 - 1]))))))));
                        var_33 *= ((/* implicit */unsigned short) ((_Bool) 9790633423191683437ULL));
                        var_34 = ((/* implicit */unsigned long long int) ((unsigned int) -6486815049346433045LL));
                        /* LoopSeq 4 */
                        /* vectorizable */
                        for (signed char i_15 = 0; i_15 < 10; i_15 += 3) 
                        {
                            arr_43 [i_6] [i_12] [i_12] [i_14] [i_15] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_36 [i_6 + 1] [i_6 - 1] [i_6 + 1])) * (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) == (8656110650517868178ULL))))));
                            var_35 = arr_41 [i_6] [i_12] [i_13] [i_6 + 1] [i_14];
                            arr_44 [i_6] [i_6] [i_6 + 1] [i_12] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 7U))));
                        }
                        /* vectorizable */
                        for (short i_16 = 0; i_16 < 10; i_16 += 3) 
                        {
                            var_36 = ((/* implicit */int) min((var_36), (((/* implicit */int) arr_21 [i_12]))));
                            arr_47 [i_12] [i_13] [i_16] = ((/* implicit */unsigned long long int) ((unsigned short) var_2));
                            var_37 = ((/* implicit */signed char) max((var_37), (((/* implicit */signed char) var_0))));
                        }
                        for (unsigned char i_17 = 0; i_17 < 10; i_17 += 3) /* same iter space */
                        {
                            var_38 = ((/* implicit */_Bool) arr_42 [i_14] [i_12] [i_17] [i_12] [i_12]);
                            var_39 = ((/* implicit */short) min((var_39), (((/* implicit */short) ((unsigned short) max((((/* implicit */unsigned int) var_3)), (arr_28 [i_6 - 1] [i_12] [i_13])))))));
                            var_40 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned long long int) arr_29 [i_12] [i_12] [i_6 + 2] [i_12]))) ? (((/* implicit */long long int) ((/* implicit */int) arr_37 [i_12]))) : ((~(6486815049346433045LL)))));
                            var_41 = ((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) arr_6 [i_6 + 1]))))));
                        }
                        for (unsigned char i_18 = 0; i_18 < 10; i_18 += 3) /* same iter space */
                        {
                            var_42 = ((/* implicit */int) min((((/* implicit */long long int) (unsigned short)32159)), (var_12)));
                            arr_54 [i_18] [i_18] [i_12] [i_13] [i_12] [i_6] [i_6] = ((8656110650517868190ULL) % (((/* implicit */unsigned long long int) 1422483713338237472LL)));
                            arr_55 [i_6] [i_12] [i_12] = ((/* implicit */unsigned int) (+(((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)25806)) || (((/* implicit */_Bool) 9790633423191683426ULL)))))) & (((((/* implicit */_Bool) var_7)) ? (-7617792904752383687LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)25815)))))))));
                            var_43 = ((((/* implicit */long long int) ((/* implicit */int) ((unsigned char) var_8)))) % (((arr_23 [i_12]) * (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) arr_42 [i_13] [i_13] [i_13] [i_13] [i_13])))))))));
                        }
                    }
                } 
            } 
            var_44 = ((/* implicit */unsigned int) ((long long int) 9790633423191683413ULL));
        }
        arr_56 [i_6] &= ((/* implicit */_Bool) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) 9790633423191683425ULL)) ? (((/* implicit */long long int) 1536273323)) : (2317493154320401902LL)))) ? (((((/* implicit */_Bool) (unsigned char)117)) ? (-6486815049346433046LL) : (6486815049346433036LL))) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))))));
    }
}
