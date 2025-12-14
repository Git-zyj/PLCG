/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140426
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140426 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140426
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
    /* LoopSeq 2 */
    for (int i_0 = 2; i_0 < 15; i_0 += 3) 
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned long long int i_1 = 3; i_1 < 13; i_1 += 1) 
        {
            var_17 *= ((/* implicit */_Bool) 33554431U);
            arr_6 [i_0] [i_0] [i_1 + 3] = ((/* implicit */int) (_Bool)0);
        }
        for (short i_2 = 1; i_2 < 13; i_2 += 2) 
        {
            var_18 = ((/* implicit */short) max((max((max((((/* implicit */long long int) (short)63)), (16383LL))), (((/* implicit */long long int) max(((unsigned short)45881), (((/* implicit */unsigned short) var_12))))))), (max((((/* implicit */long long int) max((((/* implicit */short) var_14)), ((short)54)))), (max((((/* implicit */long long int) -2147483633)), (arr_0 [i_0])))))));
            var_19 = ((/* implicit */signed char) max((min((((/* implicit */long long int) min((var_9), (((/* implicit */int) (unsigned short)2047))))), (max((8605879196701082542LL), (arr_5 [i_2] [i_0]))))), (((/* implicit */long long int) min((max((((/* implicit */unsigned int) arr_4 [(unsigned short)14] [1] [(short)5])), (arr_8 [i_0] [i_0 + 1] [i_0]))), (((/* implicit */unsigned int) min((((/* implicit */signed char) (_Bool)1)), ((signed char)-19)))))))));
            var_20 = ((/* implicit */signed char) min((((/* implicit */unsigned short) max((max(((short)54), (var_2))), (((/* implicit */short) max((var_4), (((/* implicit */signed char) (_Bool)0)))))))), (max((((/* implicit */unsigned short) min(((signed char)-19), ((signed char)18)))), (max((((/* implicit */unsigned short) var_12)), ((unsigned short)2047)))))));
        }
        /* vectorizable */
        for (long long int i_3 = 2; i_3 < 13; i_3 += 3) 
        {
            var_21 *= ((/* implicit */short) (_Bool)1);
            var_22 = ((/* implicit */unsigned char) (signed char)-17);
            arr_12 [i_0] [i_0] = ((/* implicit */short) (signed char)-17);
            arr_13 [i_0] [i_0] = ((/* implicit */unsigned long long int) (signed char)4);
        }
        arr_14 [i_0] = ((/* implicit */short) max((min((max((((/* implicit */unsigned long long int) (signed char)17)), (6895181376583774604ULL))), (min((11551562697125777011ULL), (((/* implicit */unsigned long long int) (signed char)-42)))))), (((/* implicit */unsigned long long int) max((max((arr_5 [i_0] [i_0 - 1]), (((/* implicit */long long int) (_Bool)1)))), (((/* implicit */long long int) min(((signed char)-8), ((signed char)-17)))))))));
    }
    for (unsigned int i_4 = 0; i_4 < 12; i_4 += 1) 
    {
        arr_19 [i_4] = ((/* implicit */unsigned short) min((min((((/* implicit */int) min((((/* implicit */short) (signed char)-22)), ((short)54)))), (max((arr_7 [i_4] [i_4] [i_4]), (-581040471))))), (((/* implicit */int) min((((/* implicit */short) max(((unsigned char)128), (((/* implicit */unsigned char) (signed char)17))))), (max(((short)-19501), ((short)(-32767 - 1)))))))));
        var_23 *= ((/* implicit */unsigned int) max((((/* implicit */int) min((max((((/* implicit */short) var_12)), (var_2))), (((/* implicit */short) max(((_Bool)1), ((_Bool)1))))))), (min((min((581040471), (((/* implicit */int) (_Bool)1)))), (min((((/* implicit */int) (short)-54)), (-738304469)))))));
        var_24 = ((/* implicit */unsigned short) min((min((((/* implicit */unsigned int) min((arr_9 [i_4] [i_4]), (((/* implicit */short) (_Bool)0))))), (max((4294967295U), (((/* implicit */unsigned int) (unsigned short)5)))))), (max((min((4U), (((/* implicit */unsigned int) var_2)))), (((/* implicit */unsigned int) min((arr_1 [i_4]), (((/* implicit */int) var_5)))))))));
        /* LoopSeq 4 */
        for (unsigned char i_5 = 0; i_5 < 12; i_5 += 1) 
        {
            var_25 = max((((/* implicit */unsigned int) max((max((((/* implicit */unsigned short) var_14)), (var_11))), (max(((unsigned short)16383), (((/* implicit */unsigned short) (signed char)24))))))), (max((max((0U), (((/* implicit */unsigned int) (short)-32745)))), (max((arr_8 [i_5] [i_4] [i_5]), (var_8))))));
            /* LoopSeq 2 */
            /* vectorizable */
            for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) /* same iter space */
            {
                arr_25 [i_5] [i_5] = ((/* implicit */long long int) 3330160431U);
                arr_26 [i_5] [i_5] = ((/* implicit */signed char) (short)54);
            }
            /* vectorizable */
            for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) /* same iter space */
            {
                var_26 = ((/* implicit */unsigned char) (short)(-32767 - 1));
                arr_30 [i_4] [i_5] [i_5] [i_5] = (short)32749;
                var_27 -= ((/* implicit */unsigned int) (short)-26636);
            }
        }
        /* vectorizable */
        for (signed char i_8 = 0; i_8 < 12; i_8 += 1) 
        {
            var_28 |= ((/* implicit */unsigned char) (short)32748);
            var_29 += (short)55;
            arr_35 [i_4] [i_4] = ((/* implicit */long long int) (signed char)-42);
            arr_36 [i_4] = ((/* implicit */int) (_Bool)0);
        }
        /* vectorizable */
        for (unsigned short i_9 = 0; i_9 < 12; i_9 += 2) 
        {
            var_30 = ((/* implicit */signed char) (short)44);
            var_31 += (signed char)-1;
        }
        for (unsigned short i_10 = 0; i_10 < 12; i_10 += 3) 
        {
            /* LoopSeq 3 */
            for (short i_11 = 2; i_11 < 8; i_11 += 2) 
            {
                arr_44 [i_11] [i_11 - 1] = ((/* implicit */short) min((max((((/* implicit */unsigned int) (short)62)), (min((523738173U), (((/* implicit */unsigned int) (short)32753)))))), (((/* implicit */unsigned int) max((((/* implicit */unsigned short) min(((short)-4872), ((short)0)))), (max((var_11), (((/* implicit */unsigned short) var_4)))))))));
                /* LoopNest 2 */
                for (signed char i_12 = 0; i_12 < 12; i_12 += 1) 
                {
                    for (unsigned short i_13 = 0; i_13 < 12; i_13 += 2) 
                    {
                        {
                            var_32 = ((/* implicit */_Bool) min((max((min((-8658216095134056300LL), (((/* implicit */long long int) (short)-59)))), (((/* implicit */long long int) min((((/* implicit */unsigned short) (_Bool)1)), (var_7)))))), (((/* implicit */long long int) max((((/* implicit */unsigned int) max((((/* implicit */int) (short)-46)), (arr_48 [(_Bool)1] [i_10] [(_Bool)1] [i_10] [i_10] [i_10] [i_10])))), (min((arr_40 [i_13] [i_10] [i_10]), (((/* implicit */unsigned int) (unsigned char)125)))))))));
                            var_33 *= ((/* implicit */unsigned int) max((((/* implicit */long long int) min((max((var_0), (((/* implicit */int) (short)-62)))), (min((arr_7 [i_4] [i_4] [i_12]), (((/* implicit */int) var_2))))))), (max((min((arr_0 [i_11]), (((/* implicit */long long int) arr_37 [i_12] [i_13])))), (((/* implicit */long long int) max((((/* implicit */unsigned short) (short)46)), (var_7))))))));
                        }
                    } 
                } 
                arr_50 [i_4] [i_4] [i_10] [(short)8] = ((/* implicit */unsigned long long int) min(((short)4088), (((/* implicit */short) (unsigned char)117))));
                var_34 = ((/* implicit */long long int) min((var_34), (((/* implicit */long long int) max((max((max((((/* implicit */int) (short)54)), (var_0))), (((/* implicit */int) max((((/* implicit */short) (signed char)-119)), ((short)48)))))), (min((min((-1), (((/* implicit */int) (unsigned short)33633)))), (((/* implicit */int) min((((/* implicit */short) (unsigned char)127)), (arr_23 [i_10] [i_4])))))))))));
            }
            for (short i_14 = 0; i_14 < 12; i_14 += 1) 
            {
                arr_53 [i_14] = ((/* implicit */unsigned short) max((((/* implicit */long long int) min((((/* implicit */int) min((((/* implicit */unsigned char) arr_28 [i_14] [i_10] [i_10] [i_4])), (var_14)))), (min((7), (((/* implicit */int) (signed char)-119))))))), (max((max((((/* implicit */long long int) var_9)), (arr_0 [i_14]))), (((/* implicit */long long int) min(((short)-4868), ((short)-54))))))));
                arr_54 [i_4] [i_14] [i_4] = ((/* implicit */long long int) min((((/* implicit */unsigned int) min((((/* implicit */int) min((((/* implicit */short) (signed char)118)), ((short)-37)))), (min((arr_47 [i_4] [i_4] [i_14] [i_14] [i_4]), (((/* implicit */int) (unsigned char)105))))))), (max((min((((/* implicit */unsigned int) (short)-4872)), (var_8))), (((/* implicit */unsigned int) max((((/* implicit */short) arr_21 [i_4] [i_4])), ((short)-59))))))));
            }
            for (unsigned int i_15 = 1; i_15 < 10; i_15 += 2) 
            {
                arr_57 [i_4] [i_4] [(unsigned char)9] = ((/* implicit */int) max((((/* implicit */long long int) min((((/* implicit */unsigned int) min(((short)4871), ((short)57)))), (max((arr_16 [i_15]), (((/* implicit */unsigned int) var_7))))))), (min((min((arr_27 [6]), (((/* implicit */long long int) 1065353216)))), (((/* implicit */long long int) min(((short)-4883), (((/* implicit */short) (unsigned char)139)))))))));
                var_35 = ((/* implicit */short) max((var_35), (((/* implicit */short) max((max((max((((/* implicit */unsigned int) var_16)), (3221225472U))), (min((arr_34 [i_4]), (((/* implicit */unsigned int) arr_52 [i_4] [i_4])))))), (((/* implicit */unsigned int) max((max(((unsigned short)6830), (((/* implicit */unsigned short) (short)6648)))), (((/* implicit */unsigned short) (unsigned char)139))))))))));
                var_36 = ((/* implicit */short) max((((/* implicit */unsigned int) max((((/* implicit */int) max((var_6), (((/* implicit */unsigned short) arr_28 [i_4] [i_10] [i_10] [i_15 + 2]))))), (min((arr_56 [i_4] [i_4] [i_4]), (((/* implicit */int) arr_28 [i_4] [i_10] [i_4] [i_15 + 1]))))))), (min((((/* implicit */unsigned int) max((((/* implicit */unsigned short) (short)-1)), (var_7)))), (max((var_10), (((/* implicit */unsigned int) arr_39 [i_15 + 1]))))))));
                arr_58 [i_15] [i_10] [i_4] = ((/* implicit */int) min((((/* implicit */long long int) max((min((arr_23 [i_4] [i_10]), (((/* implicit */short) (unsigned char)168)))), (((/* implicit */short) max((((/* implicit */signed char) arr_55 [i_10] [i_10])), (var_4))))))), (max((((/* implicit */long long int) max((var_8), (((/* implicit */unsigned int) arr_11 [(unsigned char)10] [i_10] [(unsigned char)10]))))), (min((328213605776750804LL), (((/* implicit */long long int) arr_39 [(unsigned short)1]))))))));
                arr_59 [i_4] [i_10] [i_15] = ((/* implicit */unsigned long long int) min((max((((/* implicit */unsigned short) max((arr_37 [i_10] [i_15 - 1]), (arr_24 [i_10] [8ULL] [i_15] [i_10])))), (min((((/* implicit */unsigned short) (signed char)42)), ((unsigned short)511))))), (((/* implicit */unsigned short) min((min((arr_46 [i_10] [i_15]), ((short)4846))), (max((((/* implicit */short) var_14)), (var_2))))))));
            }
            var_37 += ((/* implicit */signed char) max((((/* implicit */unsigned short) (short)-4877)), (max((max(((unsigned short)65535), (((/* implicit */unsigned short) (short)32745)))), (min((((/* implicit */unsigned short) (short)22361)), ((unsigned short)31744)))))));
            arr_60 [i_10] = ((/* implicit */short) min((min((max((((/* implicit */long long int) arr_20 [i_10] [i_4])), (var_15))), (((/* implicit */long long int) min((var_8), (((/* implicit */unsigned int) var_16))))))), (max((min((41877752448212580LL), (((/* implicit */long long int) var_4)))), (min((var_15), (((/* implicit */long long int) (short)30687))))))));
            arr_61 [i_4] [i_4] [i_4] = ((/* implicit */unsigned char) min((min((((/* implicit */long long int) max((var_6), (((/* implicit */unsigned short) (short)-4872))))), (min((((/* implicit */long long int) arr_39 [i_4])), (-41877752448212586LL))))), (((/* implicit */long long int) max((max((arr_20 [i_4] [i_4]), ((unsigned short)6832))), (((/* implicit */unsigned short) min(((short)-1), (((/* implicit */short) arr_55 [i_4] [i_4]))))))))));
        }
    }
    var_38 = ((/* implicit */int) min((max((max((var_13), (var_8))), (((/* implicit */unsigned int) max((((/* implicit */unsigned short) var_3)), (var_7)))))), (((/* implicit */unsigned int) max((((/* implicit */int) (unsigned short)58715)), (-752920991))))));
    var_39 = ((/* implicit */int) min((264241152U), (((/* implicit */unsigned int) (unsigned short)6830))));
}
