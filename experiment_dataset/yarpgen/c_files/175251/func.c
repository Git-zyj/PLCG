/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175251
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175251 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175251
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
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */short) ((unsigned short) max((max(((unsigned short)0), ((unsigned short)0))), (((/* implicit */unsigned short) arr_0 [0U] [i_0])))));
        /* LoopSeq 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_14 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) (unsigned short)224)) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) arr_0 [i_1] [i_0])))), (((var_4) ? (((/* implicit */int) arr_0 [i_0] [i_1])) : (((/* implicit */int) var_0))))));
            /* LoopSeq 4 */
            /* vectorizable */
            for (long long int i_2 = 0; i_2 < 15; i_2 += 1) 
            {
                /* LoopNest 2 */
                for (short i_3 = 0; i_3 < 15; i_3 += 1) 
                {
                    for (unsigned short i_4 = 0; i_4 < 15; i_4 += 1) 
                    {
                        {
                            arr_13 [i_1] [i_4] [i_3] [i_2] [i_0] [i_1] = ((/* implicit */unsigned long long int) ((long long int) (-(-1609907620))));
                            var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_5 [i_2] [i_1] [i_0])) ? (((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)5))))) : (7696581394432LL)));
                        }
                    } 
                } 
                var_16 = ((/* implicit */unsigned char) (-(((((/* implicit */unsigned long long int) -1979455090)) & (12627393215854947497ULL)))));
            }
            /* vectorizable */
            for (long long int i_5 = 1; i_5 < 14; i_5 += 2) /* same iter space */
            {
                arr_18 [i_1] [i_1] [i_1] [i_5 - 1] = ((/* implicit */unsigned int) (((+(-8755649817931181253LL))) != (((/* implicit */long long int) ((/* implicit */int) (unsigned short)222)))));
                var_17 *= ((/* implicit */unsigned short) var_12);
                var_18 = ((/* implicit */_Bool) arr_16 [i_1] [i_1]);
            }
            for (long long int i_6 = 1; i_6 < 14; i_6 += 2) /* same iter space */
            {
                /* LoopNest 2 */
                for (long long int i_7 = 0; i_7 < 15; i_7 += 3) 
                {
                    for (short i_8 = 0; i_8 < 15; i_8 += 1) 
                    {
                        {
                            var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -5872874371118147733LL)) ? (((/* implicit */unsigned long long int) 0LL)) : (14320526214080838276ULL)));
                            var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) ((unsigned short) min((((/* implicit */long long int) arr_22 [i_1] [i_1] [i_1])), (((((/* implicit */_Bool) var_8)) ? (-2115065430601799792LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)0)))))))))));
                        }
                    } 
                } 
                arr_28 [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) -2115065430601799792LL)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min(((short)(-32767 - 1)), (((/* implicit */short) var_0)))))) : (min((((((/* implicit */_Bool) -4)) ? (8928441929184719014ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)14348)) ? (((/* implicit */int) (short)12288)) : (((/* implicit */int) (unsigned short)512)))))))));
                var_21 = ((/* implicit */unsigned long long int) min((((unsigned char) arr_19 [i_1] [i_6 - 1] [i_6] [i_6 + 1])), (((/* implicit */unsigned char) ((_Bool) (!(((/* implicit */_Bool) (unsigned short)65535))))))));
                /* LoopSeq 1 */
                for (unsigned long long int i_9 = 0; i_9 < 15; i_9 += 2) 
                {
                    var_22 = ((/* implicit */signed char) min((((/* implicit */int) max(((_Bool)1), (((1609907628) > (-1979455081)))))), (((((/* implicit */_Bool) arr_5 [i_6 + 1] [i_6 + 1] [i_6 - 1])) ? (((/* implicit */int) (unsigned short)57923)) : (((/* implicit */int) (unsigned short)57923))))));
                    arr_33 [i_1] [i_6] [i_0] [i_1] = ((short) ((((/* implicit */int) (unsigned short)57914)) >= (((/* implicit */int) var_12))));
                }
            }
            for (unsigned short i_10 = 0; i_10 < 15; i_10 += 1) 
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (short i_11 = 0; i_11 < 15; i_11 += 1) 
                {
                    arr_42 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) var_8)) ? (((int) var_3)) : (((/* implicit */int) (short)19993))));
                    var_23 = ((/* implicit */signed char) ((int) var_12));
                    arr_43 [i_0] [i_0] [i_1] [14LL] [i_1] [8ULL] |= ((/* implicit */unsigned char) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (short)-17799))))) * (((var_5) << (((((-2115065430601799792LL) + (2115065430601799844LL))) - (51LL)))))));
                }
                var_24 = ((/* implicit */long long int) min((var_24), (((/* implicit */long long int) ((((/* implicit */_Bool) ((short) (short)4095))) ? (max((arr_12 [i_0] [i_0] [i_0] [i_1] [7U]), (((/* implicit */unsigned long long int) (short)31851)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_37 [8U] [i_1]))))))));
            }
        }
        /* vectorizable */
        for (unsigned char i_12 = 1; i_12 < 12; i_12 += 1) 
        {
            var_25 = ((/* implicit */long long int) ((((/* implicit */int) (unsigned short)29)) < (((/* implicit */int) (short)24330))));
            var_26 = ((/* implicit */signed char) ((unsigned int) (short)-1));
            var_27 = arr_0 [i_0] [i_12];
        }
        var_28 = ((/* implicit */int) min((var_28), (((/* implicit */int) ((((unsigned int) min((((/* implicit */unsigned int) var_0)), (var_11)))) >> (((((long long int) ((((/* implicit */_Bool) var_6)) ? (5457111909876485494LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-32001)))))) - (5457111909876485492LL))))))));
        var_29 = ((/* implicit */long long int) ((unsigned int) (~(((/* implicit */int) (unsigned short)65527)))));
    }
    for (short i_13 = 0; i_13 < 20; i_13 += 3) /* same iter space */
    {
        arr_49 [i_13] = ((((/* implicit */int) (unsigned char)155)) >> (((/* implicit */int) (_Bool)1)));
        var_30 = ((/* implicit */unsigned char) min((var_30), (((/* implicit */unsigned char) ((int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) ^ (var_7)))) ? (((/* implicit */int) ((signed char) arr_48 [i_13]))) : (max((-1355724709), (((/* implicit */int) var_8))))))))));
        arr_50 [i_13] = ((/* implicit */short) (_Bool)1);
        var_31 = ((long long int) max((((/* implicit */long long int) (unsigned short)57907)), (arr_47 [i_13])));
        arr_51 [i_13] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)155)) * (((/* implicit */int) (short)-2802))))) ? (min((((/* implicit */int) arr_48 [i_13])), (var_13))) : (((((/* implicit */int) (unsigned short)12837)) - (((/* implicit */int) arr_48 [i_13]))))));
    }
    for (short i_14 = 0; i_14 < 20; i_14 += 3) /* same iter space */
    {
        var_32 ^= ((/* implicit */signed char) ((((/* implicit */int) (short)22832)) >= (-1)));
        arr_56 [i_14] [(_Bool)1] = ((/* implicit */long long int) ((((((((/* implicit */int) (short)32767)) >> (((var_3) + (7482312543854873251LL))))) >> (((min((3863169480751911404LL), (arr_47 [i_14]))) + (6716241970351741219LL))))) >> (((/* implicit */int) ((((/* implicit */unsigned int) max((((/* implicit */int) (short)-32756)), (-1979455090)))) >= (((unsigned int) arr_54 [i_14] [i_14])))))));
        arr_57 [i_14] = ((/* implicit */long long int) ((((/* implicit */int) (unsigned short)64313)) << (((/* implicit */int) ((unsigned char) ((_Bool) (unsigned char)0))))));
    }
    var_33 = ((/* implicit */short) max((var_33), (((/* implicit */short) ((((/* implicit */long long int) ((max((-1979455112), (((/* implicit */int) var_6)))) - (var_13)))) >= (((long long int) var_9)))))));
    var_34 = ((/* implicit */short) var_10);
    /* LoopNest 3 */
    for (short i_15 = 0; i_15 < 15; i_15 += 1) 
    {
        for (unsigned char i_16 = 0; i_16 < 15; i_16 += 2) 
        {
            for (unsigned long long int i_17 = 0; i_17 < 15; i_17 += 4) 
            {
                {
                    var_35 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((min((((/* implicit */long long int) var_8)), (var_10))) % (((/* implicit */long long int) ((/* implicit */int) arr_16 [i_16] [i_16])))))), (((((((/* implicit */_Bool) (unsigned char)227)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)20564))) : (18446744073709551615ULL))) * (max((5375064323726943739ULL), (((/* implicit */unsigned long long int) (_Bool)0))))))));
                    arr_67 [i_15] [i_15] = ((/* implicit */signed char) arr_1 [i_17]);
                }
            } 
        } 
    } 
    var_36 = ((/* implicit */short) var_0);
}
