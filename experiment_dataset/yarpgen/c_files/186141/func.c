/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186141
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186141 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186141
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
    var_11 = ((/* implicit */signed char) (-(((/* implicit */int) var_1))));
    var_12 = ((/* implicit */unsigned char) (-(min((((((/* implicit */long long int) ((/* implicit */int) (short)32767))) + (-1901217975328571625LL))), (9223372036854775802LL)))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 2; i_0 < 17; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 17; i_1 += 4) 
        {
            {
                var_13 = ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_3)), (var_8))))))) << (((/* implicit */int) ((((((/* implicit */_Bool) (unsigned short)8)) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))))));
                arr_6 [i_1 - 2] = min((min((min((((/* implicit */long long int) (short)-5572)), (9223372036854775807LL))), (((((/* implicit */_Bool) -1901217975328571625LL)) ? (-2527935009585379702LL) : (-5530765033254144776LL))))), (((/* implicit */long long int) max((var_3), (((/* implicit */int) ((signed char) var_0)))))));
                var_14 = ((/* implicit */short) var_8);
                arr_7 [i_1] [i_0 - 1] [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-(min((((/* implicit */int) var_9)), (var_3))))))));
                arr_8 [i_0] [i_1 - 2] [i_0] = ((/* implicit */int) min((((/* implicit */long long int) var_0)), (max((-5530765033254144776LL), (((/* implicit */long long int) (short)32767))))));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned int i_2 = 0; i_2 < 20; i_2 += 3) 
    {
        var_15 = ((/* implicit */long long int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (-653982583) : (((/* implicit */int) (unsigned short)17))))), (3508954578U))))));
        /* LoopNest 2 */
        for (signed char i_3 = 4; i_3 < 17; i_3 += 2) 
        {
            for (unsigned long long int i_4 = 0; i_4 < 20; i_4 += 4) 
            {
                {
                    var_16 |= min((min((((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)215))))), (min((((/* implicit */long long int) var_5)), (1901217975328571625LL))))), (((/* implicit */long long int) (((+(-1901217975328571637LL))) > (((/* implicit */long long int) ((((/* implicit */_Bool) 5530765033254144776LL)) ? (1425245329U) : (1425245345U))))))));
                    var_17 = ((/* implicit */int) ((unsigned long long int) var_5));
                }
            } 
        } 
        /* LoopNest 3 */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            for (unsigned long long int i_6 = 0; i_6 < 20; i_6 += 1) 
            {
                for (unsigned long long int i_7 = 0; i_7 < 20; i_7 += 1) 
                {
                    {
                        /* LoopSeq 2 */
                        for (long long int i_8 = 1; i_8 < 18; i_8 += 3) 
                        {
                            arr_31 [i_7] [i_8 - 1] [i_7] [i_6] [i_5] [i_5] [i_7] = ((/* implicit */short) (+(((((/* implicit */int) ((var_10) <= (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))) << (((/* implicit */int) ((((/* implicit */int) var_0)) <= (((/* implicit */int) var_1)))))))));
                            arr_32 [i_7] [i_7] [i_6] [i_5] [i_7] = ((((/* implicit */_Bool) (+(438482577431398477LL)))) ? (((/* implicit */int) ((signed char) ((unsigned int) var_3)))) : (max((((/* implicit */int) var_1)), ((+(((/* implicit */int) var_7)))))));
                            arr_33 [i_2] [i_5] [i_7] [i_7] [i_8 - 1] = ((/* implicit */short) min((((/* implicit */unsigned long long int) min((var_1), ((unsigned short)62323)))), (((((/* implicit */_Bool) ((int) var_7))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) -1901217975328571637LL)))) : (max((var_8), (var_4)))))));
                            var_18 = ((/* implicit */unsigned short) ((unsigned int) (-(((var_8) - (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)20))))))));
                        }
                        /* vectorizable */
                        for (int i_9 = 0; i_9 < 20; i_9 += 2) 
                        {
                            var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) (+(((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_1)))))))));
                            arr_37 [i_7] [i_7] [i_6] [i_5] [i_7] = ((/* implicit */unsigned short) ((signed char) var_6));
                        }
                        arr_38 [i_7] [i_7] [i_7] [i_2] = ((/* implicit */long long int) ((((((/* implicit */_Bool) max((0ULL), (((/* implicit */unsigned long long int) var_9))))) ? (var_2) : (var_4))) & (((/* implicit */unsigned long long int) ((unsigned int) ((var_5) | (((/* implicit */int) (unsigned short)27511))))))));
                        var_20 = ((/* implicit */_Bool) min((((unsigned short) min((-438482577431398473LL), (((/* implicit */long long int) var_10))))), (((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)27506)))) && (((/* implicit */_Bool) 1740727628U)))))));
                        var_21 = ((/* implicit */int) min((-438482577431398487LL), (max(((~(-1901217975328571608LL))), (((/* implicit */long long int) (signed char)102))))));
                    }
                } 
            } 
        } 
        var_22 = ((/* implicit */signed char) min((-5530765033254144784LL), (((/* implicit */long long int) (unsigned char)255))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (long long int i_10 = 0; i_10 < 20; i_10 += 3) 
        {
            var_23 = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) var_0))))) ? (var_5) : ((-(((/* implicit */int) (unsigned short)38025))))));
            var_24 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_9)))))));
        }
    }
    for (unsigned long long int i_11 = 2; i_11 < 12; i_11 += 1) 
    {
        /* LoopNest 3 */
        for (long long int i_12 = 0; i_12 < 15; i_12 += 4) 
        {
            for (unsigned char i_13 = 0; i_13 < 15; i_13 += 2) 
            {
                for (unsigned short i_14 = 0; i_14 < 15; i_14 += 2) 
                {
                    {
                        arr_53 [i_11 + 2] [i_11] [i_13] = ((/* implicit */unsigned short) (~((~(max((-653982583), (2147483647)))))));
                        var_25 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) (-(min((((/* implicit */int) var_1)), (var_5)))))), (var_4)));
                        var_26 *= ((/* implicit */signed char) max((max((var_10), (((/* implicit */unsigned int) max((653982554), (((/* implicit */int) (unsigned short)19))))))), (((unsigned int) ((((/* implicit */_Bool) var_1)) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)48))))))));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (unsigned char i_15 = 0; i_15 < 15; i_15 += 1) 
        {
            for (unsigned short i_16 = 0; i_16 < 15; i_16 += 4) 
            {
                {
                    var_27 = ((/* implicit */unsigned long long int) ((_Bool) (!((!(((/* implicit */_Bool) (signed char)-37)))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (int i_17 = 0; i_17 < 15; i_17 += 3) 
                    {
                        arr_61 [i_11] [i_11] [i_16] [i_17] = ((/* implicit */signed char) ((var_4) - (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) 653982533))))))));
                        arr_62 [i_17] [i_11] [i_16] [i_15] [i_11] [i_11 + 2] = ((/* implicit */long long int) (~(((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (var_10)))));
                    }
                    var_28 = ((/* implicit */int) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min(((unsigned short)38024), (((/* implicit */unsigned short) (signed char)-63)))))))), (min((((var_8) >> (((/* implicit */int) var_0)))), (min((5785730609345167309ULL), (((/* implicit */unsigned long long int) (signed char)-75))))))));
                }
            } 
        } 
        arr_63 [i_11] = ((/* implicit */unsigned long long int) max((max((((long long int) var_8)), (((/* implicit */long long int) max((1627280356), (((/* implicit */int) (unsigned short)38034))))))), (((/* implicit */long long int) min((((unsigned int) var_2)), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) 5785730609345167325ULL))))))))));
    }
}
