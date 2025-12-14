/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104735
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104735 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104735
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        var_14 = 131071;
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 17;i_3 += 1)
                {
                    {
                        arr_8 [4] [i_1] [i_2] [i_1] [i_3 + 3] |= ((!(arr_7 [2] [2] [i_1])));
                        arr_9 [15] [i_1] [i_1] [i_0] = (arr_2 [i_1] [i_1]);
                    }
                }
            }
        }
        var_15 = ((((-(arr_1 [i_0]))) != (arr_5 [3] [1] [i_0 + 3])));
    }
    for (int i_4 = 0; i_4 < 15;i_4 += 1) /* same iter space */
    {
        var_16 = (min(var_16, ((max(((((((3 >> (arr_4 [i_4] [i_4] [i_4] [1])))) ? (-2147483647 - 1) : (min(0, 3))))), ((~(arr_1 [1]))))))));
        var_17 = ((((min((arr_1 [i_4]), 2147483639))) && (((0 >> ((((-(arr_1 [i_4]))) + 5330036886252951353)))))));
        arr_12 [i_4] = var_13;
        arr_13 [i_4] [i_4] = ((~((277310291 * (arr_0 [i_4] [i_4])))));
    }
    for (int i_5 = 0; i_5 < 15;i_5 += 1) /* same iter space */
    {
        arr_17 [0] = (((((!(arr_2 [i_5] [i_5])))) * 192));
        var_18 &= ((((min((var_12 == -80), (arr_1 [i_5])))) ? (max(var_3, 1416180166)) : (arr_14 [3] [i_5])));
        arr_18 [i_5] [5] |= var_10;
        var_19 -= (((((arr_2 [i_5] [i_5]) || 2)) ? ((((((1 ? 0 : (arr_3 [i_5] [i_5])))) ? (arr_4 [i_5] [i_5] [i_5] [i_5]) : (!2950192755088324219)))) : (arr_3 [i_5] [i_5])));
    }
    for (int i_6 = 0; i_6 < 15;i_6 += 1) /* same iter space */
    {
        var_20 = -15058;

        for (int i_7 = 0; i_7 < 1;i_7 += 1)
        {
            var_21 = (((199 ? 12028 : 32767)) << (15049 - 15048));
            var_22 = ((~(arr_7 [i_6] [i_6] [i_6])));
            arr_24 [i_6] = ((min(var_6, (arr_15 [i_6] [i_6]))) == (arr_15 [i_6] [i_7]));
            var_23 = (min(var_23, (((((((arr_19 [i_6] [i_7]) / (arr_23 [i_7])))) ? (arr_11 [i_6]) : var_2)))));
        }
        var_24 = (min(((((((arr_7 [i_6] [i_6] [i_6]) ? 10043576599447923396 : var_5))) ? (min(-1, 2244821293)) : (((-13 ? (arr_7 [i_6] [i_6] [i_6]) : 1))))), (1297181989 / 50)));
        arr_25 [i_6] [i_6] = ((((((((arr_2 [i_6] [18]) ? var_9 : 1))) ? 1 : (min(var_7, 16777215)))) & ((var_1 ? 31 : (arr_15 [9] [i_6])))));

        for (int i_8 = 0; i_8 < 15;i_8 += 1)
        {
            var_25 = min((arr_4 [i_6] [12] [14] [20]), ((+(((arr_19 [i_6] [i_8]) % var_0)))));
            arr_28 [i_6] [i_8] [i_8] = arr_22 [4];
            var_26 = ((((var_4 ? (arr_21 [i_6] [i_6]) : 48839)) == ((min((arr_21 [i_6] [i_8]), (arr_21 [i_8] [i_8]))))));
        }
        /* vectorizable */
        for (int i_9 = 1; i_9 < 1;i_9 += 1)
        {

            for (int i_10 = 1; i_10 < 14;i_10 += 1)
            {
                arr_36 [i_10] [i_10] [i_10] [i_6] = (((arr_3 [i_10 + 1] [i_10 + 1]) % (arr_3 [i_10 - 1] [i_10 - 1])));
                var_27 ^= ((-612663036 ? (((1658798583 | (arr_1 [i_9])))) : (arr_33 [i_6])));
                var_28 ^= 1276128198;
                var_29 = ((arr_31 [i_10 + 1] [i_10] [i_10 + 1]) || -621612784622743033);
                var_30 = (arr_27 [i_6] [i_6]);
            }
            for (int i_11 = 0; i_11 < 15;i_11 += 1)
            {

                for (int i_12 = 0; i_12 < 15;i_12 += 1) /* same iter space */
                {
                    var_31 += ((~(arr_2 [i_6] [i_11])));
                    var_32 = (arr_7 [i_9 - 1] [i_12] [0]);
                }
                for (int i_13 = 0; i_13 < 15;i_13 += 1) /* same iter space */
                {
                    arr_44 [i_6] [i_6] |= (~-18143);
                    var_33 = (arr_40 [i_6] [i_6]);
                    var_34 = 3548731143;
                    var_35 = -var_4;
                }
                var_36 = (max(var_36, 1));
                var_37 = -12068;
            }
            var_38 &= (arr_19 [i_9] [i_6]);
            var_39 = ((~(arr_42 [i_9] [i_9] [i_9 - 1] [i_9 - 1] [i_9 - 1])));
        }
    }
    var_40 = 4294967295;
    var_41 |= ((((var_3 ? var_0 : (min(-195798700, -6655)))) >= (((((var_7 ? var_7 : 470622981)) == var_7)))));
    #pragma endscop
}
