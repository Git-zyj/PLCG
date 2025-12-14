/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103064
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103064 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103064
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
    var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (signed char)96))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (var_16))))), (((/* implicit */unsigned long long int) 35184372088831LL)))))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (signed char i_0 = 2; i_0 < 22; i_0 += 4) 
    {
        /* LoopNest 3 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (unsigned short i_3 = 4; i_3 < 22; i_3 += 4) 
                {
                    {
                        /* LoopSeq 4 */
                        for (signed char i_4 = 0; i_4 < 24; i_4 += 4) /* same iter space */
                        {
                            var_18 -= ((/* implicit */short) ((unsigned long long int) var_3));
                            arr_13 [i_2] [i_1] [i_4] [i_3] [i_2] = ((/* implicit */unsigned short) ((signed char) arr_6 [i_2] [i_1] [i_1 - 1] [i_2]));
                            var_19 |= var_10;
                        }
                        for (signed char i_5 = 0; i_5 < 24; i_5 += 4) /* same iter space */
                        {
                            arr_16 [i_0] [i_1] [i_1] [i_1] [i_2] [i_3] [i_5] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */long long int) (~(((/* implicit */int) var_3))))) : (-1480680564450059920LL)));
                            var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) ((((/* implicit */int) ((short) 15060805078945671728ULL))) & (((/* implicit */int) arr_5 [i_0 - 2])))))));
                        }
                        for (unsigned long long int i_6 = 1; i_6 < 22; i_6 += 3) /* same iter space */
                        {
                            var_21 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) & (var_6)));
                            var_22 = ((/* implicit */long long int) (!(((var_9) && (var_10)))));
                        }
                        for (unsigned long long int i_7 = 1; i_7 < 22; i_7 += 3) /* same iter space */
                        {
                            arr_22 [i_0] [i_3] [i_2] [i_7] [i_7] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((long long int) (short)737))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_21 [i_7] [i_3] [i_7] [i_7] [i_0] [i_0])) ? (-1480680564450059914LL) : (((/* implicit */long long int) ((/* implicit */int) var_10))))))));
                            arr_23 [i_0] [i_7] [i_2] [i_2] [i_2] [i_7] [i_7] = ((/* implicit */long long int) ((unsigned long long int) (unsigned short)9039));
                        }
                        arr_24 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((((/* implicit */_Bool) (unsigned short)9041)) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_1]))) : (-4276085844138914797LL))) : (((/* implicit */long long int) ((/* implicit */int) var_14)))));
                    }
                } 
            } 
        } 
        /* LoopSeq 2 */
        for (short i_8 = 0; i_8 < 24; i_8 += 2) 
        {
            /* LoopNest 2 */
            for (unsigned short i_9 = 0; i_9 < 24; i_9 += 4) 
            {
                for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                {
                    {
                        /* LoopSeq 3 */
                        for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) 
                        {
                            arr_38 [i_0] [i_8] [i_9] [i_10] [i_9] = (+(((/* implicit */int) ((arr_11 [i_0] [i_9] [i_10] [i_11]) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))));
                            arr_39 [i_0] [i_0] [i_0] [i_10] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (~(((/* implicit */int) var_14))));
                            arr_40 [i_10] [i_0] [i_10] [i_8] [i_9] [i_10] [i_11] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)129)) ? (((/* implicit */int) (signed char)-113)) : (((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned short)9063))))));
                        }
                        for (int i_12 = 1; i_12 < 23; i_12 += 3) /* same iter space */
                        {
                            var_23 = ((/* implicit */short) var_0);
                            var_24 = ((/* implicit */signed char) (-(-9042001936087983617LL)));
                            var_25 = ((/* implicit */signed char) min((var_25), (((/* implicit */signed char) (unsigned short)9050))));
                            var_26 = ((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)9041))));
                        }
                        for (int i_13 = 1; i_13 < 23; i_13 += 3) /* same iter space */
                        {
                            var_27 = -1480680564450059920LL;
                            arr_48 [i_0] [i_0] [i_10] [i_9] [i_10] [i_10] [i_13] = ((/* implicit */_Bool) var_0);
                        }
                        arr_49 [i_10] [i_10] [i_9] [i_10] [i_10] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_32 [i_0] [i_10] [i_9])) : (((/* implicit */int) (unsigned short)9023))));
                        var_28 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (unsigned short)56502)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (unsigned short)9061)))) * (((/* implicit */int) var_9))));
                        /* LoopSeq 1 */
                        for (long long int i_14 = 0; i_14 < 24; i_14 += 2) 
                        {
                            var_29 = ((/* implicit */unsigned short) ((signed char) -1480680564450059920LL));
                            var_30 = ((/* implicit */unsigned int) max((var_30), (((/* implicit */unsigned int) (unsigned short)9050))));
                        }
                        var_31 = ((/* implicit */int) max((var_31), ((~(((/* implicit */int) var_4))))));
                    }
                } 
            } 
            arr_53 [i_0] [i_8] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)2)) ? (-919134039) : (((/* implicit */int) var_15))));
            var_32 = ((/* implicit */unsigned short) (+((-(var_6)))));
            /* LoopNest 3 */
            for (unsigned int i_15 = 0; i_15 < 24; i_15 += 4) 
            {
                for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                {
                    for (unsigned long long int i_17 = 0; i_17 < 24; i_17 += 4) 
                    {
                        {
                            var_33 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) (unsigned short)43194)) ^ (((/* implicit */int) arr_34 [i_0] [i_0] [i_0] [i_16] [i_0] [i_0])))) >= (((/* implicit */int) (unsigned short)56495))));
                            arr_62 [i_0] [i_16] = ((/* implicit */short) ((unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)9050))) + (arr_52 [i_0]))));
                            arr_63 [i_17] [i_0] [i_15] [i_16] [i_17] [i_17] [i_0] = ((/* implicit */signed char) ((unsigned int) ((((/* implicit */int) (_Bool)1)) << (((((/* implicit */int) (unsigned short)56505)) - (56505))))));
                        }
                    } 
                } 
            } 
        }
        for (int i_18 = 0; i_18 < 24; i_18 += 4) 
        {
            /* LoopNest 2 */
            for (unsigned long long int i_19 = 0; i_19 < 24; i_19 += 4) 
            {
                for (unsigned char i_20 = 0; i_20 < 24; i_20 += 2) 
                {
                    {
                        var_34 = ((/* implicit */_Bool) max((var_34), (((/* implicit */_Bool) (signed char)-9))));
                        var_35 = ((/* implicit */long long int) arr_56 [i_0] [i_18] [i_0] [i_20]);
                    }
                } 
            } 
            var_36 = ((/* implicit */int) max((var_36), (((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) (unsigned short)9033)) : (((/* implicit */int) arr_19 [i_0] [i_18] [i_0] [i_0] [i_0]))))));
            arr_73 [i_0] [i_18] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_71 [i_0] [i_18] [i_0 - 2] [i_18] [i_0] [i_0])) - (((/* implicit */int) (unsigned char)2))));
            var_37 = ((/* implicit */unsigned long long int) max((var_37), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_70 [i_18] [i_0] [i_0] [i_0 + 2])) < (((/* implicit */int) (!(((/* implicit */_Bool) (short)17647))))))))));
        }
        arr_74 [i_0] = ((/* implicit */_Bool) ((((/* implicit */int) arr_26 [i_0] [i_0 - 1])) | (((/* implicit */int) arr_35 [i_0] [i_0] [i_0 + 1]))));
        var_38 = ((/* implicit */unsigned char) (signed char)34);
    }
    for (signed char i_21 = 0; i_21 < 16; i_21 += 4) 
    {
        arr_77 [i_21] [i_21] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max(((-(((/* implicit */int) var_0)))), (((1257479098) % (((/* implicit */int) arr_36 [i_21] [i_21] [i_21]))))))) ? (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned short) arr_72 [i_21] [i_21] [i_21])), ((unsigned short)56497))))) : (((((/* implicit */_Bool) var_3)) ? (((long long int) (_Bool)1)) : (((/* implicit */long long int) ((((/* implicit */_Bool) -940006592)) ? (arr_64 [i_21]) : (((/* implicit */int) (unsigned short)19)))))))));
        arr_78 [i_21] &= (-(((((/* implicit */_Bool) arr_7 [i_21] [i_21] [i_21] [i_21] [i_21])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)9040))) : (-6112325892709151272LL))));
        arr_79 [i_21] [i_21] = ((/* implicit */long long int) arr_30 [i_21] [i_21] [i_21] [i_21]);
        var_39 = ((((/* implicit */int) ((((/* implicit */int) (unsigned short)56486)) != (((/* implicit */int) (_Bool)1))))) <= (((/* implicit */int) var_10)));
    }
    /* vectorizable */
    for (short i_22 = 0; i_22 < 23; i_22 += 3) 
    {
        var_40 = ((/* implicit */int) var_12);
        /* LoopNest 3 */
        for (signed char i_23 = 0; i_23 < 23; i_23 += 1) 
        {
            for (short i_24 = 3; i_24 < 22; i_24 += 3) 
            {
                for (_Bool i_25 = 0; i_25 < 1; i_25 += 1) 
                {
                    {
                        arr_92 [i_22] [(unsigned short)6] [i_24] [i_25] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_65 [i_24 - 2] [i_24 - 3])) ? (((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) (unsigned char)130)) : (((/* implicit */int) var_2)))) : ((~(((/* implicit */int) (unsigned short)56486))))));
                        arr_93 [i_23] [i_24] [i_23] [i_23] = var_9;
                        var_41 += ((/* implicit */long long int) ((((/* implicit */_Bool) var_14)) ? (1646567071U) : (((/* implicit */unsigned int) ((/* implicit */int) var_5)))));
                        var_42 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_91 [i_22] [i_23] [i_22] [i_25] [i_23])) / (((/* implicit */int) var_14))))) ? (((/* implicit */int) (short)2479)) : (arr_42 [i_22] [i_23] [i_22] [i_24 - 2] [i_23])));
                    }
                } 
            } 
        } 
    }
    for (short i_26 = 3; i_26 < 20; i_26 += 3) 
    {
        arr_97 [i_26] = ((/* implicit */_Bool) var_0);
        arr_98 [i_26] [i_26] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) min((var_7), (var_7)))))))) / ((-(var_6)))));
    }
    var_43 ^= ((/* implicit */_Bool) (((!(((/* implicit */_Bool) ((1257479073) >> (((var_6) - (12317758827300342964ULL)))))))) ? (((/* implicit */unsigned long long int) max((((/* implicit */int) var_2)), ((~(((/* implicit */int) (_Bool)0))))))) : (var_16)));
    var_44 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 0U)) % (min((((5015201367146541899ULL) | (((/* implicit */unsigned long long int) -940006610)))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_11)))))))));
}
