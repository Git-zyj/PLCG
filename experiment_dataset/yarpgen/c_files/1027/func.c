/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1027
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1027 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1027
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
    for (short i_0 = 0; i_0 < 11; i_0 += 2) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */short) (+(((/* implicit */int) (short)(-32767 - 1)))));
        var_16 -= (short)32766;
    }
    for (short i_1 = 0; i_1 < 11; i_1 += 2) /* same iter space */
    {
        var_17 = ((/* implicit */unsigned int) min((((((/* implicit */int) var_2)) << (((/* implicit */int) (!(((/* implicit */_Bool) 4274239429034712089LL))))))), ((+(((/* implicit */int) ((arr_4 [i_1]) >= (arr_4 [i_1]))))))));
        var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) min((((/* implicit */int) (short)2588)), (((((((/* implicit */int) arr_1 [i_1])) < (((/* implicit */int) (short)-2589)))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_1])) || (((/* implicit */_Bool) -3924926208827504764LL))))) : (((/* implicit */int) (short)-2589)))))))));
    }
    for (short i_2 = 0; i_2 < 11; i_2 += 2) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned char i_3 = 0; i_3 < 11; i_3 += 3) 
        {
            arr_9 [i_3] [(signed char)4] [i_3] = ((/* implicit */short) (!(((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) == (arr_0 [i_2])))));
            var_19 = ((/* implicit */signed char) (short)0);
            arr_10 [i_3] [i_3] = ((/* implicit */unsigned long long int) ((min((18U), (((/* implicit */unsigned int) arr_1 [i_2])))) * (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_2])) ? (((/* implicit */int) arr_1 [i_2])) : (((/* implicit */int) arr_1 [(short)9])))))));
        }
        /* LoopSeq 1 */
        /* vectorizable */
        for (signed char i_4 = 1; i_4 < 9; i_4 += 2) 
        {
            arr_14 [i_2] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */int) (signed char)102)) > (arr_11 [i_4 + 2] [i_4])));
            /* LoopNest 2 */
            for (unsigned char i_5 = 0; i_5 < 11; i_5 += 1) 
            {
                for (unsigned long long int i_6 = 4; i_6 < 8; i_6 += 2) 
                {
                    {
                        arr_20 [i_2] [i_2] [i_2] [10ULL] = ((((/* implicit */_Bool) arr_5 [(signed char)10] [(signed char)10])) ? (((/* implicit */unsigned int) (+(((/* implicit */int) (short)2588))))) : (arr_5 [i_6 + 3] [i_4 - 1]));
                        var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 38U)) ? (((unsigned int) arr_8 [i_2] [i_2] [i_5])) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)51)))));
                        var_21 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_16 [i_6 - 3] [i_6 - 2] [i_4 + 1] [i_4 - 1])) ? (((/* implicit */int) arr_16 [i_6 - 1] [i_6 + 3] [i_4 + 1] [i_4 + 2])) : (((/* implicit */int) arr_16 [i_6 + 2] [i_6 + 2] [i_4 + 2] [i_4 + 1]))));
                        var_22 = ((/* implicit */short) ((((/* implicit */_Bool) arr_19 [i_4] [i_4 + 2] [6U] [i_4 + 1])) ? (arr_19 [i_4] [i_4 + 2] [(short)4] [3U]) : (arr_19 [i_4] [i_4 + 1] [i_4] [i_4])));
                        var_23 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 0))));
                    }
                } 
            } 
            var_24 ^= ((/* implicit */signed char) arr_16 [9LL] [i_4] [2U] [9LL]);
            /* LoopNest 2 */
            for (unsigned int i_7 = 0; i_7 < 11; i_7 += 3) 
            {
                for (unsigned long long int i_8 = 2; i_8 < 10; i_8 += 3) 
                {
                    {
                        var_25 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 917576756U)) ? (2ULL) : (((/* implicit */unsigned long long int) 4294967257U))));
                        var_26 = ((/* implicit */signed char) (+(var_10)));
                        arr_27 [i_2] [i_4] [i_7] [i_8] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)26480)) ? (((/* implicit */long long int) ((/* implicit */int) (short)32743))) : (arr_26 [i_2])))) ? (-3924926208827504764LL) : (3563490163708253753LL)));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (short i_9 = 3; i_9 < 8; i_9 += 4) 
            {
                for (unsigned long long int i_10 = 0; i_10 < 11; i_10 += 4) 
                {
                    {
                        /* LoopSeq 3 */
                        for (unsigned int i_11 = 1; i_11 < 10; i_11 += 2) 
                        {
                            arr_35 [i_4] [i_9 - 3] [i_4] = ((/* implicit */short) 4325451253805305981LL);
                            var_27 |= ((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) (unsigned char)19))))));
                        }
                        for (long long int i_12 = 0; i_12 < 11; i_12 += 3) 
                        {
                            var_28 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) var_0)) : (var_3)))) ? (((unsigned long long int) var_14)) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)117)))));
                            var_29 = ((/* implicit */unsigned char) ((3310461418U) == (4294967268U)));
                            var_30 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((short) arr_6 [i_12] [i_10]))) ? (((((/* implicit */_Bool) arr_28 [i_2] [i_2] [i_9] [i_10])) ? (arr_25 [i_2] [i_4] [i_2] [i_10] [i_12] [(short)8]) : (((/* implicit */long long int) ((/* implicit */int) (short)26762))))) : (var_7)));
                        }
                        for (long long int i_13 = 0; i_13 < 11; i_13 += 2) 
                        {
                            var_31 -= var_2;
                            arr_40 [(unsigned char)7] [i_4] [i_9 + 3] [i_4] [10U] = ((/* implicit */signed char) ((arr_15 [i_4 + 1] [i_4] [i_4 + 2]) & (((/* implicit */long long int) ((/* implicit */int) (unsigned char)205)))));
                            var_32 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_39 [i_2] [10LL] [i_9] [i_2] [i_13]))));
                        }
                        arr_41 [i_2] [0LL] [0LL] [i_2] [i_2] [0LL] = ((/* implicit */short) (signed char)-64);
                    }
                } 
            } 
        }
        arr_42 [i_2] = ((/* implicit */long long int) ((min((min((9ULL), (((/* implicit */unsigned long long int) (short)-11)))), (((/* implicit */unsigned long long int) arr_37 [i_2] [i_2] [i_2])))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -410038187))))))));
    }
    var_33 = ((/* implicit */short) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_0)), (var_1))))));
    var_34 -= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((var_5) % (((/* implicit */unsigned int) ((/* implicit */int) var_15))))) : (min((4294967290U), (((/* implicit */unsigned int) (short)32743))))))) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (var_12)));
    var_35 |= ((/* implicit */long long int) min((var_14), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 624333059565628357LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (var_5)))) ? (min((((/* implicit */unsigned int) (short)(-32767 - 1))), (133693440U))) : (var_0)))));
    /* LoopNest 2 */
    for (int i_14 = 0; i_14 < 14; i_14 += 3) 
    {
        for (unsigned char i_15 = 0; i_15 < 14; i_15 += 1) 
        {
            {
                arr_47 [i_15] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((((/* implicit */int) (signed char)(-127 - 1))) + (2147483647))) >> (((((/* implicit */int) (short)-21559)) + (21585)))))) ? (((((/* implicit */int) (short)16806)) - (((/* implicit */int) (short)-22611)))) : (min((((/* implicit */int) var_2)), (arr_46 [i_14] [i_15] [i_15]))))))));
                var_36 = ((/* implicit */short) ((((((/* implicit */long long int) 1879048192U)) < (arr_43 [i_14] [i_15]))) ? (((/* implicit */unsigned long long int) (+(3310461415U)))) : (min((18446743936270598144ULL), (((/* implicit */unsigned long long int) min((4U), (((/* implicit */unsigned int) var_8)))))))));
            }
        } 
    } 
}
