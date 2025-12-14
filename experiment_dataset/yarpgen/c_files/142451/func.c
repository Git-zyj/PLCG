/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142451
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142451 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142451
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
    for (int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        var_11 = ((/* implicit */int) min((var_11), (((/* implicit */int) (signed char)-81))));
        arr_2 [i_0] [14] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (-703826941) : (((/* implicit */int) var_6))));
        var_12 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) - (var_8)));
    }
    for (int i_1 = 4; i_1 < 10; i_1 += 3) 
    {
        var_13 -= ((max((((-1407510757) % (-1242454960))), (((/* implicit */int) ((((/* implicit */int) (signed char)81)) <= (((/* implicit */int) var_7))))))) ^ (((/* implicit */int) ((((var_9) < (((/* implicit */int) var_2)))) && (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-102))) < (arr_1 [(_Bool)1])))))));
        /* LoopSeq 1 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            /* LoopSeq 4 */
            /* vectorizable */
            for (unsigned long long int i_3 = 3; i_3 < 9; i_3 += 4) 
            {
                var_14 = ((/* implicit */short) (~(1872567051)));
                var_15 = ((/* implicit */signed char) ((_Bool) arr_4 [i_1]));
                var_16 = ((/* implicit */int) max((var_16), ((-(((/* implicit */int) var_3))))));
                arr_10 [i_1] [i_2] [i_2] = ((/* implicit */unsigned long long int) arr_3 [i_1]);
                var_17 = (~(942220406));
            }
            for (signed char i_4 = 1; i_4 < 11; i_4 += 1) 
            {
                /* LoopSeq 4 */
                for (long long int i_5 = 0; i_5 < 12; i_5 += 4) /* same iter space */
                {
                    arr_16 [i_2] [(signed char)7] [1ULL] [3ULL] [i_5] = ((/* implicit */unsigned short) min((max((((/* implicit */int) var_3)), (var_9))), (((/* implicit */int) arr_12 [i_1] [i_1 - 2] [i_1 - 4]))));
                    arr_17 [i_2] [i_2] [i_4] = ((/* implicit */unsigned short) ((unsigned long long int) -709988244));
                }
                for (long long int i_6 = 0; i_6 < 12; i_6 += 4) /* same iter space */
                {
                    var_18 = ((/* implicit */int) max((var_18), (((/* implicit */int) (!(((/* implicit */_Bool) 12602019019819553808ULL)))))));
                    arr_20 [i_6] &= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((unsigned short) -709988244)))));
                }
                for (long long int i_7 = 0; i_7 < 12; i_7 += 4) /* same iter space */
                {
                    arr_25 [11] [11] [11] [1] [11] [i_2] = max((((/* implicit */int) min((((/* implicit */unsigned short) var_4)), ((unsigned short)38714)))), ((+((-(((/* implicit */int) var_3)))))));
                    arr_26 [i_1] [i_2] [i_2] [i_7] = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */int) ((_Bool) -842699635))), (856586172)))) ? (min((-512379014), (((/* implicit */int) (short)31633)))) : (((int) (unsigned short)26822))));
                }
                /* vectorizable */
                for (int i_8 = 0; i_8 < 12; i_8 += 3) 
                {
                    arr_31 [i_1 + 1] [i_2] [i_2] [i_1 + 1] = ((/* implicit */int) ((140737487306752ULL) & (((/* implicit */unsigned long long int) var_5))));
                    var_19 += ((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [(signed char)2] [(signed char)2])) || (((/* implicit */_Bool) (signed char)59))));
                }
                var_20 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) ((int) var_4))) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_11 [i_1 + 1] [i_1 + 1] [i_1] [i_2])) : (arr_29 [i_4] [i_4] [i_4 + 1] [i_4 + 1] [i_4 - 1]))) : (((arr_29 [i_4] [10] [i_4 - 1] [i_4] [i_4 + 1]) & (((/* implicit */int) (signed char)127))))));
                var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) (+(((((/* implicit */_Bool) arr_15 [i_1] [i_1 + 1] [i_4 - 1] [8] [i_4 - 1])) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) var_0)))))))));
                var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) var_2))));
                arr_32 [i_2] [i_2] = ((((((/* implicit */_Bool) 12602019019819553817ULL)) ? (3642138003290074348LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-115))))) + (((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */_Bool) (unsigned short)38713)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (var_8))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)10627))))))));
            }
            for (unsigned char i_9 = 1; i_9 < 10; i_9 += 4) 
            {
                var_23 = ((/* implicit */long long int) ((var_0) << (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_23 [i_9 - 1] [i_9 - 1] [7LL] [i_1 - 1])) : (((/* implicit */int) arr_12 [i_1 + 2] [i_1 - 2] [i_9 + 1]))))));
                var_24 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) (unsigned short)39441)))) > ((-(arr_14 [i_9 + 2] [i_1 - 1] [i_1 - 2] [i_1])))));
                var_25 = ((/* implicit */unsigned char) min((var_25), (((/* implicit */unsigned char) min(((signed char)-119), ((signed char)-95))))));
            }
            for (int i_10 = 2; i_10 < 9; i_10 += 3) 
            {
                arr_40 [i_2] = ((/* implicit */int) ((unsigned long long int) (+(((/* implicit */int) var_7)))));
                /* LoopSeq 3 */
                for (unsigned long long int i_11 = 0; i_11 < 12; i_11 += 3) 
                {
                    arr_43 [i_1] [8ULL] [i_2] [i_11] = ((/* implicit */int) max((((/* implicit */unsigned long long int) ((long long int) ((int) var_0)))), (min((((((/* implicit */_Bool) (unsigned short)38716)) ? (5844725053889997804ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))), (((/* implicit */unsigned long long int) ((var_5) / (((/* implicit */int) (short)32080)))))))));
                    var_26 -= ((/* implicit */signed char) ((min((var_0), (((/* implicit */int) arr_34 [i_1 + 1] [i_11] [(signed char)11])))) <= (((((/* implicit */_Bool) -6593967513432312547LL)) ? (((/* implicit */int) var_4)) : (var_9)))));
                    var_27 = min((var_1), (((/* implicit */unsigned long long int) (~(((int) var_2))))));
                }
                for (int i_12 = 0; i_12 < 12; i_12 += 3) /* same iter space */
                {
                    var_28 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1242454962)) ? (((/* implicit */unsigned long long int) (-2147483647 - 1))) : (18446744073709551607ULL)))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)3))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) var_9)))))) : (((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)3))))) ? (((2574318863071703505ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) 1063489227))))))));
                    arr_48 [i_2] [i_2] [i_10] [i_2] [i_1] = ((/* implicit */signed char) ((var_9) % (((/* implicit */int) ((_Bool) -983017303)))));
                    var_29 = ((/* implicit */long long int) ((unsigned char) min((-1992627388), ((~((-2147483647 - 1)))))));
                }
                for (int i_13 = 0; i_13 < 12; i_13 += 3) /* same iter space */
                {
                    var_30 = ((/* implicit */signed char) min((((((-1099062020) + (2147483647))) >> (((18446744073709551612ULL) - (18446744073709551608ULL))))), (((/* implicit */int) ((short) -1LL)))));
                    arr_51 [i_1] [10LL] [i_13] &= ((/* implicit */long long int) ((1ULL) & (((((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)127))))) * (14147634773806705806ULL)))));
                    var_31 ^= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 709988243)) && (((/* implicit */_Bool) arr_45 [i_1])))))) / (min((max((((/* implicit */unsigned long long int) var_2)), (18446744073709551615ULL))), (((/* implicit */unsigned long long int) (+(arr_18 [7] [i_1] [i_2] [i_2] [i_2] [i_13]))))))));
                    var_32 = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) var_5)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)76)) >> (((((/* implicit */int) var_4)) - (140)))))) ? (((/* implicit */unsigned long long int) 709988243)) : (max((var_8), (((/* implicit */unsigned long long int) (unsigned short)26822)))))))));
                    var_33 = ((/* implicit */int) arr_6 [i_1] [i_1] [i_1]);
                }
                var_34 = ((/* implicit */int) min((var_34), (((/* implicit */int) min((min((((/* implicit */long long int) arr_30 [11] [i_2] [i_1] [i_1 - 2] [2] [i_10 + 1])), (9223372036854775807LL))), (((/* implicit */long long int) ((((/* implicit */int) (signed char)0)) != (((/* implicit */int) (unsigned short)38714))))))))));
            }
            /* LoopNest 2 */
            for (unsigned short i_14 = 0; i_14 < 12; i_14 += 1) 
            {
                for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                {
                    {
                        arr_60 [i_1] [i_2] [i_1] [10] [(_Bool)1] = ((long long int) min((((/* implicit */int) var_3)), (min((var_10), (((/* implicit */int) var_2))))));
                        var_35 = ((min((((1063489227) >> (((15872425210637848110ULL) - (15872425210637848081ULL))))), (1063489213))) / (((/* implicit */int) (short)31008)));
                        arr_61 [i_1] [i_2] [i_14] [i_2] = ((/* implicit */int) ((short) arr_7 [i_2] [(short)4]));
                        arr_62 [i_2] [i_2] [i_2] [i_1] = (-(((/* implicit */int) (_Bool)1)));
                        var_36 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((-4011154262650235280LL) + (9223372036854775807LL))) << (((((((/* implicit */int) var_2)) + (84))) - (17)))))) ? (var_0) : (((/* implicit */int) arr_9 [i_2]))))) ? (((((/* implicit */_Bool) -1629385885)) ? (((/* implicit */long long int) var_9)) : (34326183936LL))) : (((/* implicit */long long int) (-((+(1242454950))))))));
                    }
                } 
            } 
            var_37 = ((/* implicit */signed char) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))));
        }
    }
    for (long long int i_16 = 0; i_16 < 10; i_16 += 1) 
    {
        arr_66 [i_16] [i_16] = ((/* implicit */long long int) var_10);
        var_38 = ((/* implicit */int) (+(min((((/* implicit */unsigned long long int) 4279295778833695863LL)), (arr_8 [i_16] [i_16] [i_16] [i_16])))));
    }
    var_39 = ((/* implicit */unsigned char) var_1);
}
