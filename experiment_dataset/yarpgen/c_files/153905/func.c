/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153905
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153905 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153905
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
    for (int i_0 = 4; i_0 < 23; i_0 += 4) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) -9053133324218852797LL))));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : ((+(18446744073709551615ULL)))));
        /* LoopSeq 1 */
        for (unsigned int i_1 = 1; i_1 < 23; i_1 += 2) 
        {
            var_18 = ((/* implicit */short) var_11);
            var_19 &= ((/* implicit */long long int) ((-938221143) <= ((~(((/* implicit */int) (unsigned short)896))))));
            arr_7 [i_0] [(unsigned char)19] [i_1] = ((/* implicit */unsigned short) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_1 + 1] [i_1 + 1]))) < (arr_6 [i_0 + 1] [i_0 - 1]))) ? (((/* implicit */unsigned long long int) max((((/* implicit */long long int) (unsigned short)64639)), (9053133324218852798LL)))) : (arr_6 [i_0 + 1] [i_0 - 3])));
        }
    }
    for (unsigned long long int i_2 = 0; i_2 < 11; i_2 += 1) 
    {
        /* LoopSeq 4 */
        for (unsigned short i_3 = 3; i_3 < 8; i_3 += 3) 
        {
            var_20 = ((/* implicit */long long int) 15759143843393626844ULL);
            arr_14 [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (((var_3) ? (arr_12 [i_2] [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))))) ? (max((var_16), (((/* implicit */long long int) var_11)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)23)) ? (((/* implicit */int) arr_9 [i_3 + 3] [i_2])) : (((/* implicit */int) var_14)))))));
        }
        for (unsigned char i_4 = 0; i_4 < 11; i_4 += 2) 
        {
            var_21 = max((max((17090449264366276384ULL), (((/* implicit */unsigned long long int) arr_5 [i_2])))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_3))))) ? (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)87)) || (((/* implicit */_Bool) (unsigned char)193))))) : ((~(((/* implicit */int) var_9))))))));
            arr_17 [i_2] = ((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_2] [i_2])) ? (((/* implicit */unsigned long long int) -7627824974655615287LL)) : (arr_12 [i_2] [i_2])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3512711514569353961LL)) ? (((/* implicit */int) (signed char)-75)) : (((/* implicit */int) (signed char)-51))))) : (min((((/* implicit */unsigned long long int) var_6)), (arr_8 [i_2] [i_4]))))));
        }
        for (unsigned char i_5 = 0; i_5 < 11; i_5 += 2) 
        {
            /* LoopSeq 1 */
            for (signed char i_6 = 4; i_6 < 7; i_6 += 1) 
            {
                arr_22 [i_2] [i_6] [i_5] &= var_14;
                var_22 = ((/* implicit */unsigned int) (((((!(((/* implicit */_Bool) var_5)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_15 [i_2])) : (((/* implicit */int) var_12))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) arr_5 [i_6 - 3])))))) : (min((((/* implicit */long long int) (unsigned char)129)), (0LL)))));
                /* LoopSeq 3 */
                for (unsigned long long int i_7 = 0; i_7 < 11; i_7 += 3) /* same iter space */
                {
                    var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) 2422518408378116362LL))));
                    /* LoopSeq 1 */
                    for (int i_8 = 0; i_8 < 11; i_8 += 1) 
                    {
                        var_24 += (+(((/* implicit */int) (unsigned char)82)));
                        var_25 -= ((/* implicit */unsigned int) (~(((/* implicit */int) ((((((/* implicit */_Bool) 9552465045247041153ULL)) ? (((/* implicit */unsigned long long int) -8739856987060338283LL)) : (18446744073709551615ULL))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -1518960717)))))))))));
                        arr_29 [i_2] [i_5] [i_6] [i_7] [i_7] [i_6] = max((((/* implicit */long long int) (unsigned char)142)), (9053133324218852798LL));
                    }
                    arr_30 [8LL] [i_2] [i_6] [i_7] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)64639)) ^ (((/* implicit */int) var_2))))))))) % (((((/* implicit */_Bool) 3080137161790323848LL)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) 3309243244U))))));
                    var_26 -= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */int) var_7)), (var_17)))) ? (arr_10 [i_2]) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_4)) != (((/* implicit */int) var_14))))))))) ? (((((/* implicit */_Bool) arr_11 [i_5] [i_5] [i_7])) ? (2687600230315924748ULL) : (var_10))) : (((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_0)), (arr_24 [i_2] [i_2] [i_5] [i_6 - 1]))))));
                }
                for (unsigned long long int i_9 = 0; i_9 < 11; i_9 += 3) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_10 = 0; i_10 < 11; i_10 += 1) 
                    {
                        var_27 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(-569373595980589062LL)))) || (((/* implicit */_Bool) (+(arr_21 [i_6 - 2] [i_6 + 4] [i_2]))))));
                        arr_35 [i_2] [i_5] [i_6] [i_5] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (+(15759143843393626886ULL))))));
                        arr_36 [i_10] [i_9] [i_2] [i_2] [i_2] = ((/* implicit */unsigned char) (+(var_17)));
                    }
                    var_28 = 1683487110;
                    /* LoopSeq 3 */
                    for (long long int i_11 = 0; i_11 < 11; i_11 += 1) /* same iter space */
                    {
                        arr_39 [i_2] [i_5] [i_6] [i_6] [i_9] [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)896)) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) var_15))) : (((((/* implicit */_Bool) 12128910503364596045ULL)) ? (var_16) : (var_16))))) : (((/* implicit */long long int) ((/* implicit */int) var_14)))));
                        var_29 -= ((/* implicit */short) -8842007358629806078LL);
                    }
                    for (long long int i_12 = 0; i_12 < 11; i_12 += 1) /* same iter space */
                    {
                        arr_42 [i_2] [i_5] [i_6] [i_2] [i_2] = ((/* implicit */unsigned char) ((short) ((((/* implicit */_Bool) (short)4811)) ? (-4988547740167672565LL) : (-3080137161790323848LL))));
                        arr_43 [i_2] [i_2] [i_5] [i_5] [i_2] [3] [i_12] = ((/* implicit */int) max((15759143843393626832ULL), (((/* implicit */unsigned long long int) (signed char)-32))));
                        var_30 = ((/* implicit */unsigned long long int) ((long long int) (signed char)-56));
                    }
                    for (unsigned short i_13 = 2; i_13 < 10; i_13 += 1) 
                    {
                        arr_47 [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((signed char) arr_45 [i_6 - 1] [i_2] [i_6] [i_6 + 2] [i_6]))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((var_8) == (((/* implicit */long long int) var_11)))))) <= (((((/* implicit */_Bool) -8751715043715716598LL)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_1))))))) : (min((((/* implicit */long long int) ((signed char) 3080137161790323852LL))), (((((/* implicit */_Bool) (signed char)76)) ? (((/* implicit */long long int) arr_28 [i_2] [i_2])) : (var_1)))))));
                        var_31 |= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 4611686018427387903ULL))));
                        var_32 = ((/* implicit */long long int) max((var_32), (((/* implicit */long long int) (~(arr_21 [i_5] [i_5] [i_5]))))));
                        arr_48 [i_2] [i_5] [i_6] [i_9] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_38 [i_13] [i_13 + 1] [i_13 + 1] [i_13] [i_13 + 1])) >> (((/* implicit */int) ((_Bool) var_12)))))) ? (max((((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) arr_23 [i_2] [i_2] [i_6] [i_9] [i_13])) : (((/* implicit */int) (_Bool)1)))), (((((/* implicit */_Bool) arr_41 [i_2] [i_2] [i_2])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_3)))))) : (((-1245615688) / (((/* implicit */int) arr_25 [i_2] [i_2] [i_2]))))));
                    }
                }
                for (unsigned long long int i_14 = 0; i_14 < 11; i_14 += 3) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (signed char i_15 = 0; i_15 < 11; i_15 += 3) 
                    {
                        var_33 = ((/* implicit */unsigned long long int) var_14);
                        var_34 ^= ((((/* implicit */_Bool) 7404844191238915052LL)) ? (-3080137161790323854LL) : (((/* implicit */long long int) ((/* implicit */int) ((var_10) == (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))))));
                    }
                    var_35 = ((/* implicit */_Bool) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) (+(var_11))))))), (((unsigned int) (short)-19099))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_16 = 3; i_16 < 9; i_16 += 3) 
                    {
                        var_36 += ((/* implicit */signed char) (!(((/* implicit */_Bool) max((((/* implicit */int) arr_31 [i_16 - 1] [i_5] [i_6 - 4] [i_6] [i_5] [i_6])), (var_17))))));
                        var_37 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(var_17)))) ? ((~(var_1))) : (((/* implicit */long long int) min((((/* implicit */int) (signed char)5)), (-1))))))) ? (min((3080137161790323843LL), (((/* implicit */long long int) (short)-19094)))) : (min((((/* implicit */long long int) var_11)), (8983178157530953706LL)))));
                        var_38 = ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */long long int) min(((_Bool)1), ((_Bool)1)))), (var_1)))) ? (((((/* implicit */_Bool) (+(((/* implicit */int) var_4))))) ? (3080137161790323855LL) : (((/* implicit */long long int) (~(((/* implicit */int) (signed char)-1))))))) : (((((/* implicit */_Bool) (~(var_8)))) ? (-327277141317174327LL) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_15)))))))));
                        var_39 = ((/* implicit */signed char) min((var_39), (((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-1))))) ? (min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned char)251))))), (((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (2525407431929774538ULL))))) : (((/* implicit */unsigned long long int) ((int) (!(((/* implicit */_Bool) (unsigned char)3)))))))))));
                    }
                }
            }
            arr_57 [i_2] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((var_10), (((/* implicit */unsigned long long int) (+(8983178157530953706LL)))))))));
            var_40 *= ((/* implicit */long long int) ((_Bool) var_7));
            var_41 = ((/* implicit */unsigned short) max((var_41), (((/* implicit */unsigned short) ((((((/* implicit */_Bool) -327277141317174340LL)) ? (9104911970124075852LL) : (-1LL))) - (((/* implicit */long long int) ((((/* implicit */_Bool) arr_24 [i_2] [i_5] [i_5] [i_5])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_13))))))))));
            var_42 = ((/* implicit */signed char) max((var_42), (((/* implicit */signed char) ((unsigned short) (+(((/* implicit */int) var_12))))))));
        }
        for (long long int i_17 = 0; i_17 < 11; i_17 += 4) 
        {
            arr_62 [i_2] [i_2] = ((/* implicit */short) arr_54 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] [i_2]);
            var_43 = ((/* implicit */unsigned short) max((var_43), (((/* implicit */unsigned short) ((_Bool) (+(((/* implicit */int) (unsigned short)3072))))))));
        }
        var_44 = ((/* implicit */short) ((min((((((/* implicit */int) var_5)) / (335212291))), (((/* implicit */int) arr_45 [i_2] [i_2] [i_2] [i_2] [i_2])))) << ((+((~(((/* implicit */int) var_6))))))));
    }
    for (short i_18 = 2; i_18 < 10; i_18 += 4) 
    {
        var_45 = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (signed char)-59)) : (((/* implicit */int) var_15)))))))) & (((((/* implicit */_Bool) arr_63 [i_18 + 2] [i_18 - 1])) ? (((/* implicit */int) arr_63 [i_18 + 2] [i_18 - 1])) : (((/* implicit */int) arr_63 [i_18 + 2] [i_18 - 1]))))));
        var_46 = ((/* implicit */unsigned long long int) min((var_46), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) (~(((/* implicit */int) var_0))))), (((((/* implicit */long long int) ((/* implicit */int) (signed char)-1))) * (9LL))))))));
    }
    var_47 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_11)) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) var_11)) : (max((3512711514569353950LL), (((/* implicit */long long int) var_4)))))) : (max((((/* implicit */long long int) max((var_13), (((/* implicit */unsigned short) var_9))))), (var_16)))));
}
