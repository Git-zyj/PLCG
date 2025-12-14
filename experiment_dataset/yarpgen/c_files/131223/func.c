/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131223
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131223 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131223
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
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 11; i_1 += 4) 
        {
            {
                var_15 -= ((/* implicit */unsigned int) (-2147483647 - 1));
                /* LoopSeq 3 */
                /* vectorizable */
                for (signed char i_2 = 0; i_2 < 15; i_2 += 4) 
                {
                    var_16 = ((/* implicit */int) var_5);
                    arr_10 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) var_13)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
                    var_17 ^= ((/* implicit */_Bool) ((signed char) var_9));
                }
                for (short i_3 = 0; i_3 < 15; i_3 += 3) 
                {
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (signed char i_4 = 0; i_4 < 15; i_4 += 3) /* same iter space */
                    {
                        var_18 += ((/* implicit */signed char) ((unsigned int) ((((/* implicit */int) (_Bool)1)) << (((/* implicit */int) (_Bool)1)))));
                        arr_17 [(short)1] [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */long long int) var_14)) : (9223372036854775807LL)))) ? (((((/* implicit */_Bool) (unsigned short)8160)) ? (2147483647) : (((/* implicit */int) (signed char)72)))) : (((/* implicit */int) (signed char)(-127 - 1)))));
                        arr_18 [i_0] [i_0] [i_0] [i_0] [i_1] = ((/* implicit */short) var_7);
                        var_19 ^= ((/* implicit */signed char) ((((((/* implicit */_Bool) var_4)) ? (2091028741870062159LL) : (((/* implicit */long long int) ((/* implicit */int) var_10))))) << (((((/* implicit */int) (signed char)51)) - (49)))));
                    }
                    for (signed char i_5 = 0; i_5 < 15; i_5 += 3) /* same iter space */
                    {
                        var_20 = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) (signed char)-78)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (short)19143))))) : (max((var_1), (var_12)))))));
                        var_21 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) -342338236))) ? (((/* implicit */int) (signed char)122)) : (((((/* implicit */_Bool) 3646816823U)) ? ((-2147483647 - 1)) : (((/* implicit */int) (unsigned short)0)))))))));
                        var_22 = ((/* implicit */long long int) (short)-8693);
                        var_23 = ((/* implicit */unsigned char) ((3396090399648710841ULL) - (((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)7936))) : (-6987380709822654030LL)))))));
                        var_24 = ((/* implicit */unsigned int) (+(((((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)-17585))))) | (max((((/* implicit */unsigned long long int) (unsigned short)65528)), (var_9)))))));
                    }
                    for (long long int i_6 = 0; i_6 < 15; i_6 += 2) 
                    {
                        var_25 *= ((/* implicit */unsigned short) (-(max((((/* implicit */long long int) var_7)), (7657404720302315968LL)))));
                        var_26 = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) var_3))))) ? ((((_Bool)1) ? (3844968711U) : (((/* implicit */unsigned int) var_4)))) : (min((var_12), (((/* implicit */unsigned int) (signed char)127))))));
                    }
                    /* LoopSeq 2 */
                    for (unsigned long long int i_7 = 0; i_7 < 15; i_7 += 2) 
                    {
                        /* LoopSeq 2 */
                        for (short i_8 = 0; i_8 < 15; i_8 += 3) 
                        {
                            var_27 = ((/* implicit */signed char) max((var_27), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) / (((var_9) | (((/* implicit */unsigned long long int) ((((((/* implicit */int) (short)-4569)) + (2147483647))) >> (((((/* implicit */int) (unsigned short)65389)) - (65386)))))))))))));
                            var_28 *= ((/* implicit */unsigned int) ((unsigned short) (((((_Bool)0) ? (var_2) : (((/* implicit */long long int) 2157844366U)))) ^ (((/* implicit */long long int) ((/* implicit */int) var_7))))));
                            var_29 = ((/* implicit */short) min((var_29), (((short) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-16)))))) % (-2200956147577819902LL))))));
                            var_30 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) max(((((_Bool)1) ? (((/* implicit */unsigned long long int) var_8)) : (7560966860944687129ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)112))) : (var_1))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)-2363)))))) : (13624433121241040376ULL)));
                        }
                        for (unsigned int i_9 = 0; i_9 < 15; i_9 += 3) 
                        {
                            var_31 = ((/* implicit */signed char) max((var_31), (var_5)));
                            var_32 = ((/* implicit */short) max((var_32), (((/* implicit */short) (-(((/* implicit */int) max((((/* implicit */short) (signed char)27)), ((short)32767)))))))));
                        }
                        arr_32 [i_1] [(signed char)13] [i_1] = ((/* implicit */int) max((((6791809283081719777ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) var_7)), ((unsigned short)57417))))))), (((/* implicit */unsigned long long int) (~((~(-4895872))))))));
                    }
                    for (long long int i_10 = 1; i_10 < 13; i_10 += 1) 
                    {
                        var_33 *= ((/* implicit */long long int) min((((((/* implicit */int) max((((/* implicit */signed char) (_Bool)1)), (var_10)))) * (((/* implicit */int) (!(((/* implicit */_Bool) (short)26596))))))), (((16776704) & (((/* implicit */int) ((((/* implicit */int) (short)(-32767 - 1))) != (((/* implicit */int) (unsigned char)64)))))))));
                        arr_35 [i_0] |= ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((min((144115188075855872LL), (((/* implicit */long long int) var_13)))) * (((/* implicit */long long int) ((/* implicit */int) (signed char)82)))))), (((((/* implicit */_Bool) 7469891475275545321LL)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2146249978U)) ? (((/* implicit */int) (signed char)13)) : (((/* implicit */int) (_Bool)1))))) : (11654934790627831838ULL)))));
                    }
                    arr_36 [i_1] = ((/* implicit */int) (unsigned short)61120);
                    var_34 = ((/* implicit */signed char) max((var_34), (((/* implicit */signed char) min((var_9), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(1148876205)))) || (((/* implicit */_Bool) (~(((/* implicit */int) (short)-1)))))))))))));
                }
                for (unsigned int i_11 = 2; i_11 < 14; i_11 += 3) 
                {
                    arr_40 [i_1] [i_1] [(_Bool)1] [0U] = ((/* implicit */short) var_3);
                    var_35 = ((/* implicit */short) max((var_35), (((/* implicit */short) max((((((/* implicit */unsigned int) ((/* implicit */int) (signed char)98))) ^ (var_12))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_2))))))))));
                    var_36 = ((/* implicit */signed char) 1604627024U);
                }
                /* LoopSeq 2 */
                for (unsigned short i_12 = 1; i_12 < 13; i_12 += 4) 
                {
                    var_37 = ((((/* implicit */int) (!(((((/* implicit */int) (signed char)-13)) < (((/* implicit */int) (signed char)-82))))))) >= (((/* implicit */int) (signed char)6)));
                    var_38 |= ((/* implicit */unsigned int) max((((7401674962570522004ULL) * (((/* implicit */unsigned long long int) min((((/* implicit */int) var_11)), (var_14)))))), (((/* implicit */unsigned long long int) var_2))));
                    /* LoopSeq 2 */
                    for (signed char i_13 = 0; i_13 < 15; i_13 += 1) 
                    {
                        arr_45 [i_1] = ((/* implicit */unsigned char) (-((~(((/* implicit */int) ((signed char) var_13)))))));
                        arr_46 [1] [4U] [i_1] [(signed char)8] = ((/* implicit */long long int) (signed char)80);
                    }
                    for (signed char i_14 = 0; i_14 < 15; i_14 += 1) 
                    {
                        var_39 = ((/* implicit */signed char) min((var_39), (((/* implicit */signed char) min((((/* implicit */unsigned int) (-(((/* implicit */int) ((signed char) -671928133)))))), (min((((((/* implicit */_Bool) 95928277740539370LL)) ? (var_12) : (((/* implicit */unsigned int) -1800560268)))), (((/* implicit */unsigned int) 278993198)))))))));
                        var_40 = ((/* implicit */_Bool) min((var_40), (((/* implicit */_Bool) (short)-17006))));
                    }
                    var_41 *= ((/* implicit */int) (((-((-(var_1))))) < (((/* implicit */unsigned int) max((((/* implicit */int) (!(((/* implicit */_Bool) (short)-23))))), (var_14))))));
                }
                for (unsigned long long int i_15 = 0; i_15 < 15; i_15 += 2) 
                {
                    var_42 = ((/* implicit */signed char) max((var_42), (((/* implicit */signed char) ((unsigned int) ((((/* implicit */unsigned long long int) 6097560402830095801LL)) / (min((6676985797195815999ULL), (((/* implicit */unsigned long long int) var_7))))))))));
                    arr_51 [i_1] [14] = ((/* implicit */signed char) ((short) min((-6097560402830095801LL), (((/* implicit */long long int) (short)32765)))));
                }
            }
        } 
    } 
    var_43 = ((/* implicit */unsigned int) var_13);
    var_44 *= ((/* implicit */short) (!(((/* implicit */_Bool) var_9))));
    var_45 = ((/* implicit */long long int) (short)-10449);
}
